#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
float liczby[100];
int licznik=0;
string linia;
fstream plik;

int main()
{
    plik.open("pomiary.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Nie ma takiego pliku!"; exit(0);
    }

    while(!plik.eof())//dopoki nieprawda jest, ze mamy koniec pliku
    {
        getline(plik,linia);
        liczby[licznik]=atof(linia.c_str());
        licznik++;
    }

    cout<<"Liczba pomiarow: "<<licznik<<endl<<endl;

    for(int i=0;i<licznik;i++)
    {
    cout<<liczby[i]<<endl;
    }

    return 0;
}
