#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko, linia;
int nr_tel, nr_linii=1;
fstream plik;

int main()
{
    plik.open("wizytowka.txt", ios::in);
    if(plik.good()==false)
    { cout<<"Nie ma takiego pliku!"; exit(0);
    }
    while(getline(plik,linia))
    {
       switch(nr_linii)
       {
           case 1:imie=linia;                 break;
           case 2:nazwisko=linia;             break;
           case 3:nr_tel=atoi(linia.c_str()); break;
       }
       nr_linii++;
    }

    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel<<endl;

    plik.close();
    return 0;
}
