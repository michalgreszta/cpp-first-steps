#include <iostream>
#include <math.h>

using namespace std;

int ilezest,osoby,ciaswp,suma=0;
float wynik;
int main()
{
    cin>>ilezest;
    for(int i=0;i<ilezest;i++)
    {
    cin>>osoby>>ciaswp;

    int czasy[osoby],ciaspos[osoby];
    for(int i=0;i<osoby;i++)
    {cin>>czasy[i];}

    for(int i=0;i<osoby;i++)
    {ciaspos[i]=86400/czasy[i];}

    for(int i=0;i<osoby;i++)
    {suma+=ciaspos[i];}

    wynik=suma/ciaswp;

    if(suma&ciaswp==0)
    {
        cout<<wynik;
    }
    else
    {
    wynik=ceil(1.0*suma/ciaswp);//rzutowanie na typ float
    cout<<wynik<<endl;
    }
    suma=0;
    }

    return 0;
}
