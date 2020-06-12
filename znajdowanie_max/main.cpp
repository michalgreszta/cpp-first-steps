#include <iostream>
#include <cstdlib>

using namespace std;

int ile,m;
int main()
{
    cout<<"Ile bedzie liczb: "; cin>>ile;

    int *wskaznik;
    wskaznik=new int[ile];
    cout<<"Podaj tyle liczb rozdzielajac je spacja: ";

    for(int i=0;i<ile;i++)
    {
        cin>>*wskaznik;
        wskaznik++;
    }
    cout<<endl;
    wskaznik-=ile;

    m=*wskaznik;
    wskaznik++;
    for(int i=0;i<ile;i++)
    {if(m<*wskaznik) m=*wskaznik;
     wskaznik++;}

    cout<<"Najwieksza liczba jest: "<<m<<endl;
    system("pause");
    delete[] wskaznik;

    return 0;
}
