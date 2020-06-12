#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
clock_t start,stop,start2,stop2;
double czas,czas2;

void bubbleSort(int *tablica, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(tablica[j]>tablica[j+1])//sort od najm do najd
            {
                swap(tablica[j],tablica[j+1]);
            }
        }
    }
}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while(tablica[i]<v) i++;
        while(tablica[j]>v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;           //
            j--;           //PAMIETAJ O ZMIANIE INDEKSÓW
        }
    }
    while(i<=j);
    if(j>lewy) quicksort(tablica,lewy, j); //NIE MYL CO, DO CZEGO: PAMIETAJ, ZE SKORO PETLA ZOSTALA PRZERWANA TO [[[J<I]]]
    if(i<prawy) quicksort(tablica, i, prawy);
}

int main()
{
    cout<<"Porownanie czasow sortowania v.1"<<endl<<endl;
    cout<<"Ile losowych miejsc w tablicy? "; cin>>ile;

    int *tablica;
    tablica=new int[ile];
    int *tablica2;
    tablica2=new int[ile];

    srand(time(NULL));
    for(int i=0;i<ile;i++)
    {
        tablica[i]=rand()%100000+1;
    }

    for(int i=0;i<ile;i++)
    {
        tablica2[i]=tablica[i];//BARDZO WAZNE!!!!! NIE tablica[i]=tablica2[i], bo wtedy nadajemy kazdemu elementowi tablicy 'tablica' wartosc ZERO
    }

    /*cout<<"Wylosowane liczby dla tablicy 1: "<<endl;
    for(int i=0;i<ile;i++)
    {
        cout<<tablica[i]<<endl;
    }

    cout<<"Wylosowane liczby dla tablicy 2: "<<endl;
    for(int i=0;i<ile;i++)
    {
        cout<<tablica2[i]<<endl;
    }*/

    cout<<endl;
    cout<<"SORTOWANIE...(od najmniejszej do najwiekszej)"<<endl<<endl;

    start=clock();
    bubbleSort(tablica,ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;

    start2=clock();
    quicksort(tablica2,0,ile-1);
    stop2=clock();
    czas2=(double)(stop2-start2)/CLOCKS_PER_SEC;

    /*cout<<"Liczby po sortowaniu(tab.1): "<<endl;
    for(int i=0;i<ile;i++)
    {
        cout<<tablica[i]<<endl;
    }*/

    cout<<"Liczby po sortowaniu(tab.2): "<<endl;
    for(int i=0;i<ile;i++)
    {
        cout<<tablica2[i]<<endl;
    }

    cout<<"Czas sortowania babelkowego: "<<czas<<"s"<<endl;
    cout<<"Czas sortowania szybkiego: "<<czas2<<"s"<<endl;

    delete [] tablica;
    delete [] tablica2;
    return 0;
}
