#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

clock_t start, stop;
double czas;
int ile;
int main()
{
    cout << "Ile liczb ma zmiescic tablica: "; cin>>ile;


    int *tablica;
    tablica=new int[ile];

    start=clock();
    for(int i=0;i<ile;i++)
    {
        tablica[i]=i;
        tablica[i]+=50;
    }
    stop=clock();

    czas=double(stop-start);
    delete[] tablica;
    cout<<"Czas wykonywania operacji przypisywania(bez wskaznikow): "<<czas<<endl;

    tablica=new int[ile];
    int *wskaznik=tablica;

    start=clock();
    for(int i=0;i<ile;i++)
    {
        *wskaznik=i;
        *wskaznik+=50;
        wskaznik++;
    }
    stop=clock();

    czas=double(stop-start);
    cout<<"Czas wykonywania operacji przypisywania(ze wskaznikiem): "<<czas<<endl;
    delete[] tablica;
    return 0;
}
