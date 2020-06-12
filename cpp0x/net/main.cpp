#include <iostream>

void wyswietl( int tablica[], int ile )
{
    if( ile <= 0 )
    {
        std::cout << "Tablica jest pusta." << std::endl;
        return;
    } //if

    int i = 0;
    do
    {
        std::cout << tablica[ i ] << ", ";
        i++;
    } while( i < ile );

    std::cout << std::endl;
}

int dopisz( int iLiczba, int tablica[], int ile )
{
    tablica[ ile ] = iLiczba;
    ile++;
    return ile; //zwraca ile jest elementów po dodaniu nowego
}

int main()
{
    int liczbaElementow = 0;
    int tablicaLiczb[ 10 ];
    wyswietl( tablicaLiczb, liczbaElementow );

    liczbaElementow = dopisz( 123, tablicaLiczb, liczbaElementow );
    wyswietl( tablicaLiczb, liczbaElementow );

    liczbaElementow = dopisz( 321, tablicaLiczb, liczbaElementow );
    wyswietl( tablicaLiczb, liczbaElementow );
    return 0;
}
