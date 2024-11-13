
//SIII ex 1
void divX(int n,int x){
  for(int i=n*x;i>=n;i=i-x){
    cout<<i<<" ";
  }
}

///SIII ex 2
#include <iostream>
using namespace std;
int main() {
  int a[101][101],n,i,j;
  cin>>n;
  for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        cin >> a[i][j];
      }
    }  
///prima coloana j=1
  for(i=1;i<=n-1;i++){
    cout<<a[i][1]<<" ";
  }
 ///ultima linie i=n
for(j=1;j<=n-1;j++){
  cout<<a[n][j]<<" ";
}
  //ultima coloana
  for(i=n;i>=1;i--){
    cout<<a[i][n]<<' ';
  }

  //prima linie
   for(j=n;j>=2;j--){
     cout<<a[1][j]<<" ";
   }


}


///SIII ex 3
#include <fstream>

using namespace std;

/*
void divX(int n, int x)
{
    for(int i = n; i >= 1; i--)
    {
        cout << x * i<< " ";
    }
}
*/

ifstream cin("bac.in");
ofstream cout("bac.out");

int main()
{
    int x, v[101] = {};
    while(cin >> x)
    {
        if(x < 100)
            v[x] = 1;
    }
    int a = 0, b = 0;
    for(int i = 99; i >= 10; i --)
    {
        if(!v[i] && (i/10 != i % 10)) {
            // knt ++;
            if(!a)
                a = i;
            else {
                b = i;
                break;
            }
        }
    }
    if(!a && !b)
        cout << "nu exista";
    else
        cout << a << " " << b;
}

/**
Algoritmul este eficient dpdv al timpului deoarece
are o complexitate O(n), unde n repr nr de elem din fisier

Initial retinem prin intermediul unui vector de aparitii
numerele care apar in fisier cu val <100
Parcurgem vectorul de aparitii si retinem cele mai mari
doua valori ce nu apar in vector.
Daca nu exista afisam mesaj.

*/







