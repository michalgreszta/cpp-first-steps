#include <iostream>
#include <windows.h> //sleep
#include <cstdlib>//cls i exit
#include <stdio.h>//getchar
#include <conio.h>//getch

using namespace std;

float x, y; //zmiennoprzecinkowe
char wybor;//znak z klawiatury TYLKO INT ALBO CZAR
int main()
{
    cout << "Witaj w kalkulatorze! Podaj dwie liczby, nastepnie wybierz, co chcesz z nimi zrobic."<<endl;
    while(true){
    cout<<"Liczba 1: "; cin>>x;
    cout<<"Liczba 2: "; cin>>y;

    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Koniec programu" <<endl<<endl;

    wybor=getch();//czeka na znak z klawiatury, nastepnie kontynuuje dzialanie

    switch(wybor)
    {
    case '1'://lepiej dawac klamry do kazdego case'a!!!!! GDY UZYWAMY GETCH CYFRY MUSZA BYC W APOSTROFACH, PONIEWAZ JEST TO TYP CHAR I KAZDY ZNAK MUSI BYC W APOSTROFIE
        cout<<"Suma: "<<x+y<<endl<<endl;
        break;
    case '2':
        cout<<"Roznica: "<<x-y<<endl<<endl;
        break;
    case '3':
        cout<<"Iloczyn: "<<x*y<<endl<<endl;
        break;
    case '4':
        if(y==0)
            cout<<"Nie dzielimy przez zero MATOLE!"<<endl<<endl;
        else
        cout<<"Iloraz: "<<x/y<<endl<<endl;
        break;
    case '5':
        cout <<endl<< "Do zobaczenia wkrotce!";
        Sleep(1000);
        exit(0);

    default:
        cout<<"Nie ma takiej opcji w menu!"<<endl<<endl;
    }
    getchar();
    cout<<"Aby kontynuowac, nacisnij ENTER!";
    getchar();
    system("cls");
    }

    return 0;
}
