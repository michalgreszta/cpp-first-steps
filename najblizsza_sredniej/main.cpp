#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>


using namespace std;
float liczby[5];
float m,n, popr1,popr2,sred;
float srednia(float *wsk)
{   float suma=0;
    for(int i=0;i<5;i++)
    {suma+=*wsk;
    wsk++;}
    return suma/5;
}
int main()
{
    cout << "Podaj 5 dowolnych liczb przedzielonych spacja: ";
    for(int i=0;i<5;i++)
    {cin>>liczby[i];}

    sred=srednia(liczby);
    cout<<"Srednia podanych liczb: "<<sred<<endl;


    m=fabs(sred-liczby[0]);
                  if(m==0)
    {
        cout<<"Liczba najblizsza sredniej: "<<sred<<endl;
        getchar();
        exit(0);
    }
        if((sred-liczby[0])>0)
            {popr1=sred-m;}
        if((sred-liczby[0])<0)
            {popr1=sred+m;}



    for(int i=1;i<5;i++)
    {
     if(fabs(sred-liczby[i])<m)
        {m=fabs(sred-liczby[i]);
        if((sred-liczby[i])>0)
            {popr1=sred-m;}
        if((sred-liczby[i])<0)
            {popr1=sred+m;}}

     else if(fabs(sred-liczby[i])==0)
     {
        cout<<"Liczba najblizsza sredniej: "<<sred<<endl;
        getchar();
        exit(0);
     }

     else if(fabs(sred-liczby[i])==m)
        {n=fabs(sred-liczby[i]);
        if((sred-liczby[i])>0)
            {popr2=sred-n;
            if(popr2==popr1)
            {popr2=NULL;}}
        if((sred-liczby[i])<0)
            {popr2=sred+n;
            if(popr2==popr1)
            {popr2=NULL;}}

             if(n==0)
     {
        cout<<"Liczba najblizsza sredniej: "<<sred<<endl;
        getchar();
        exit(0);
     }}}

if(popr2==NULL)
    cout<<"Liczba najblizsza sredniej to "<<popr1<<endl;
else
    cout<<"Liczby najblizsze sredniej to "<<popr1<<" i "<<popr2<<endl;

    return 0;
}
