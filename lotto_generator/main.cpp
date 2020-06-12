#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba;
int main()
{
    cout << "Witaj w Lotto! Za 3 sekundy nastapi zwolnienie blokady." << endl;
    Sleep(3000);
    cout<<"Zaczynamy!"<<endl;
    srand(time(NULL));
    for(int i=1; i<=6; i++)
    {
       Sleep(1000);
       liczba=rand()%49+1;
       cout<<liczba<<"\a"<<endl;
    }
    cout<<"KONIEC!";
    getchar();
    return 0;
}
