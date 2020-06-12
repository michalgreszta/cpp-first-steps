#include <iostream>

float a, b, c;

using namespace std;
int main()
{
    cin>>a;
    cout<<"Liczba pierwsza to: "<<a<<". Wczytano? "<<cin.good()<<endl;
    cin.clear();//czysci flagi bledu
    cin.sync();//czysci bufor strumienia

    cin>>b;
    cout<<"Liczba druga to: "<<b<<". Wczytano? "<<cin.good()<<endl;
    cin.clear();
    cin.sync();

    cin>>c;
    cout<<"Liczba trzecia to: "<<c<<". Wczytano? "<<cin.good()<<endl;
    cin.clear();
    cin.sync();


    return 0;
}
