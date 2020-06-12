#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;

string temat,nick,pytanie[5],odpA[5],odpB[5],odpC[5],odpD[5],podp[5],odp;
string linia;
int nr_linii=1,nr_pytania=0,punkt=0;
fstream quiz;

int main()
{
    quiz.open("quiz.txt",ios::in);

    if(quiz.good()==false)
    {
        cout<<"Nie ma takiego pliku!"; return 0;
    }
    while(getline(quiz,linia))
    {
        switch(nr_linii)
    {
        case 1:temat=linia;                 break;
        case 2:nick=linia;                  break;
        case 3:pytanie[nr_pytania]=linia;   break;
        case 4:odpA[nr_pytania]=linia;      break;
        case 5:odpB[nr_pytania]=linia;      break;
        case 6:odpC[nr_pytania]=linia;      break;
        case 7:odpD[nr_pytania]=linia;      break;
        case 8:podp[nr_pytania]=linia;      break;
    }

    if(nr_linii==8)
    {nr_linii=2; nr_pytania++;}
    nr_linii++;
    }

    cout<<"Temat: "<<temat<<endl;
    cout<<"Twoj nick: "<<nick<<endl<<endl;

    for(int i=0;i<5;i++)
    {
    cout<<i+1<<". "<<pytanie[i]<<endl;
    cout<<"a) "<<odpA[i]<<endl;
    cout<<"b) "<<odpB[i]<<endl;
    cout<<"c) "<<odpC[i]<<endl;
    cout<<"d) "<<odpD[i]<<endl;
    cout<<"Twoja odpowiedz: "; cin>>odp;

    transform(odp.begin(),odp.end(),odp.begin(),::tolower); cout<<endl;

    if(odp==podp[i])
        {
        cout<<"Prawidlowa odpowiedz! Zdobywasz punkt!"<<endl<<endl;
        punkt++;}
    else
        cout<<"Brak punktu. Poprawna odpowiedzia jest: "<<podp[i]<<endl<<endl;
    }
    cout<<"Koniec! Zdobyles "<<punkt<<" punktow!"<<endl;
    quiz.close();
    getchar();
    return 0;
}
