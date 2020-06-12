#include <iostream>

using namespace std;
int ile, n, sil;

int silnia(int n)//liczy silnie rekurencyjnie
{
    if(n==0) return 1;
    else return silnia(n-1)*n;
}

int main()
{
    cin>>ile;

    for(int i=0;i<ile;i++)
    {
      cin>>n;//wczytuje nieujemna liczbe calkowita, oznaczajaca ilosc prob
      if(n>9){
          cout<<"0 0"<<endl;
      }
      else{
      sil=silnia(n);
      cout<<(sil%100)/10<<" "<<sil%10; cout<<endl;//pokazuje liczbe dziesiatek i liczbe jednosci danej liczby w silni
      }}
      return 0;
}
