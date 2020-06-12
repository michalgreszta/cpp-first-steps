#include <iostream>
#include <cstdlib>

using namespace std;
int n,liczba;

bool czy_pierwsza(int n)
{
	if(n<2)
		return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

int main()
{

    cin>>n;
    while((n<1)||(n>99999))
    {
        system("cls");
        cin>>n;
    }



    for(int i=0;i<n;i++){
    cin>>liczba;
    while((liczba<1)||(liczba>10000))
    {
     cin>>liczba;
    }

    if(czy_pierwsza(liczba)){
            cout<<"TAK"<<endl;}
    else{
            cout<<"NIE"<<endl;}
    }

    return 0;
}
