#include <iostream>

using namespace std;

float srednia(float *tab,int ile)
{
float suma=0;
for(int i=0;i<ile;i++)
{
    suma+=*tab;
   *tab=422;
    tab++;
}
    return suma/ile;
}

int main()
{
    float tablica[3]={3.75,4.5,5.333};

    cout<<"Srednia liczb: "<<srednia(tablica,3)<<endl;

    for(int i=0;i<3;i++)
    cout<<tablica[i]<<endl;
    return 0;
}
