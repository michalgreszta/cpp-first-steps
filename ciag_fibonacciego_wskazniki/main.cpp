#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>

using namespace std;
//long double fib[30000];
int n;
float liczba;

int main()
{
    cout << "Ile wyrazow ciagu Fibonacciego mam pokazac: ";
    cin >> n;
    //cout<<"Prezentacja nastapi za: 3"<<endl;
    long double *tablica;
    tablica=new long double[n];
    /*Beep(440,700);
    Sleep(300);
    cout<<"                           2"<<endl;
    Beep(415,600);
    Sleep(400);
    cout<<"                              1"<<endl;
    Beep(392,500);
    Sleep(500);
    system("cls");*/
    cout<<"START!"<<endl;
    //Beep(370,2500);
    tablica[0]=1;
    tablica[1]=1;
    for(int i=2; i<n; i++)
    {
        tablica[i]=tablica[i-1]+tablica[i-2];
    }
    delete [] tablica;
    for(int i=0; i<n; i++)
    {
        cout<<"Wyraz nr "<<i+1<<": "<<tablica[i]<<endl;
    }

    return 0;
}
