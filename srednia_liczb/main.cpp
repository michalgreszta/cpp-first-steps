#include <iostream>
#include <stdio.h>

using namespace std;

float suma=0, oceny[5], srednia;
int main()
{   cout<<"Podaj 5 ocen:"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Ocena numer "<<i+1<<": ";
        cin>>oceny[i];
        suma+=oceny[i];       //moze tez byc suma+=oceny[i] - znaczy to, ze do tego co jest, dodaja sie wartosci z kolejnych razow petli
    }
    cout<<"Suma="<<suma<<endl;
    srednia=suma/5;
    cout<<"Srednia="<<srednia;
    getchar();
    return 0;
}
