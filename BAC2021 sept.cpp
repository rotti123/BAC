SII ex 3
  a[0].venit=4000;
a[0].dp.anNastere=2000;
  
SIII ex1

void cuburi(int n){
  for(int i=n;i>=1;i--){
    cout<<i*i*i<<' ';
  }
} 

int main() {
  int n;
  cin >> n;
  cuburi(n);
}

SIII ex 2
#include <iostream>
using namespace std;

void genmat(int k,int n,int a[][100])
{
  for(int j=0;j<n;j++){
    a[0][j]=k+j;
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<n;j++){
      a[i][j]=a[i-1][j]+(k-1); ///observam ca putem genera urmatoarele linii crescand fiecare elem de pe linia anterioara cu k-1
    }
  }
}
void afisare(int n,int a[][100])
{
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<'\n';
  }
}
int main() {
  int k,n,a[100][100]={};
  cin>>k>>n;
  genmat(k,n,a);
  afisare(n,a);
  return 0;
}




S III EX 3
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int na,nb,a[100]={},b[100]={},nr,u,z;
  long long sol=0;
  cin>>na>>nb;
  for(int i=1;i<=na;i++){
      cin>>nr;
      u=nr%10;
      z=nr/10%10;
      if(z>u)
      {
        int aux=u;
         u=z;
         z=aux;
      }
    nr=z*10+u;
    a[nr]++;
  }
  for(int i=1;i<=nb;i++){
      cin>>nr;
      u=nr%10;
      z=nr/10%10;
      if(z>u)
      {
        int aux=u;
         u=z;
         z=aux;
      }
    nr=z*10+u;
    b[nr]++;
  }
  for(int i=0;i<=99;i++)
    {
      sol=sol+a[i]*b[i];
    }
cout<<sol; ///O(na+nb)
}

/**
Ultimele doua cifre dintr-un numar se aranjeaza in ordine
crescatoare si formeaza astfel codul pentru acel numar.
Construim doi vectori de frecventa pentru aceste coduri, 
corespunzatori celor doua siruri initiale.
Solutia problemei consta in parcurgerea intervalului [0,99]
si adunarea produselor a[i]*b[i], unde a[i] este vect
de frecv asociat primului sir iar b[i] 
pentru cel de-al doilea sir.
*/



