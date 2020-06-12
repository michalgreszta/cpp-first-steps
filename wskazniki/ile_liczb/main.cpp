#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

clock_t start, stop;//sluza one do uruchomienia i zatrzymania czasu
double czas;
int ile;
int main()
{
    cout << "Ile liczb ma miec tablica: "; cin>>ile;
    int *tablica;
    tablica=new int[ile];

    start=clock();//funkcja clock pobiera liczbe cykli procesora
    for(int i=0;i<ile;i++)
    {
    tablica[i]=i;//komputer za KAZDYM RAZEM wraca do 'spisu tresci', aby znalezc adres danej szufladki
    tablica[i]+=50;//wskazniki sa jak taka zakladka w ksiazce, wskazuja miejsce w pamieci, w ktorym sa dane szufladki,
    }             //dzieki czemu komputer nie traci czasu na grzebanie w magistrali adresowej
    stop=clock();  //rzutowanie zmiennej na double
    czas=double(stop-start)/CLOCKS_PER_SEC;//wynik to liczba cykli procesora, dlatego trzeba to podzielic przez stala
                                           //CLOCKS_PER_SEC ktora da wynik w sekundach(cykle sie skroca)
    cout<<"Czas zapisu(bez wskaznika): "<<czas;

    delete [] tablica;
    return 0;
}
