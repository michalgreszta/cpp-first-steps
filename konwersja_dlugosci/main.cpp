#include <iostream>

using namespace std;

float metry;

float ile_cali(float x)
{
 float cale;
 cale=x*39.37;
 return cale;
}

float ile_jardow(float x);

void ile_mil(float x)
{
    cout<<"Liczba mil: "<<x*0.000621;
}


int main()
{
    cout << "Podaj, ile metrow chcesz zamienic: "; cin>>metry; cout<<endl;

    cout<<"Liczba cali: "<<ile_cali(metry)<<endl;
    cout<<"Liczba jardow: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);
    return 0;
}

float ile_jardow(float x)
{
    return x*1.0936;
}
