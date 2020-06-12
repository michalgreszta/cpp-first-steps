#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int x,y;
clock_t start1,koniec1,start2,koniec2;
double czas1,czas2;

/*int f(int n)
{
    if(n==0) return 3;
    else return f(n-1)+2;
}*/

long int potegaRec(int p, int w)
{
 if(w==0) return 1;          
 else return potegaRec(p,w-1)*p;
}

long int potegaIf(int p, int w)
{
    if(w==0) return 1;
    else
    {   long int iloczyn=1;

        for(int
            i=0;i<w;i++)
            {iloczyn=iloczyn*p;}
        return iloczyn;
    }

}

/*long int wyraz(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    else return wyraz(n-1)+wyraz(n-2);
}

long int silnia(int n)
{
    if(n==0) return 1;
    else return silnia(n-1)*n;
}*/

int main()
{
    cout << "Podaj podstawe i wykladnik: "; cin>>x>>y;

        start1=clock();
        cout<<potegaIf(x,y)<<endl;
        koniec1=clock();

        start2=clock();
        cout<<potegaRec(x,y)<<endl;
        koniec2=clock();

        czas1=(double)(koniec1-start1)/CLOCKS_PER_SEC;
        czas2=(double)(koniec2-start2)/CLOCKS_PER_SEC;

        cout<<"Czas dla IFa: "<<czas1<<endl;
        cout<<"Czas dla Reca: "<<czas2<<endl;


    return 0;
}
