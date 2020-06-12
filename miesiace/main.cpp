#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;
int rok, nr_miesiaca;
int main()
{
    while(true){
    cout << "Podaj numer miesiaca: ";
    if(!(cin>>nr_miesiaca))     //wprowadzanie do programu kontroli(walidacji) danych wejsciowych - SPRAWDZIMY CZY CIN NIE ZWROCIL WARTOSCI FALSZ
    {
        cerr<<"To nie jest liczba!"<<endl;
        Sleep(1000);
        exit(0);
    }                        //"JEZELI PRAWDA JEST, ZE TO, CO W NAWIASIE MA WARTOSC FALSZ"
    switch(nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Liczba dni w tym miesiacu to 31." <<endl;
        break;


    case 4:
    case 6:
    case 9:
    case 11:
     cout<< "Liczba dni w tym miesiacu to 30." <<endl;
     break;


    case 2:
        cout<<"Podaj rok: "; cin>>rok;
        if(((rok%4==0)&&(rok%100!=0))||(rok%400==0))//rok jest podzielny przez 4 i nie jest podzielny przez 100 lub kest podzielny przez 400
            cout<<"Ten miesiac ma 29 dni."<<endl;//reszta z dzielenia przez 4=0 i reszta dzielenia przez 100!=0 lub reszta z dzielenia przez 400=0
            else
            cout<<"Ten miesiac ma 28 dni."<<endl;
        break;

    default:
        cout<<"Nie ma takiego numeru miesiaca!"<<endl;}
        cout<<endl;}
    return 0;
}
