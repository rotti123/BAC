SIII ex1:

int suma(int n){
    int s=0,d=2;
    while(n>1){
        if(n%d==0){
            s=s+d;
        }
        while(n%d==0){
            n=n/d;
        }
        d++;
    }
    return s;
}

ex2:

#include <iostream>

using namespace std;

int main() {
    int n,k,a[21][21];
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int x=a[k][1];
    for(int j=1;j<k-1;j++){
            a[k][j]=a[k][j+1];
    }
    a[k][k-1]=x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include <fstream>
#include <iostream>

using namespace std;

struct cifra {
  int fr, poz;
} a[10];

int main() {
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int x, k = 0, cmax = -1;
  while (cin >> x) {
    k++;
    a[x % 10].poz = k;
    a[x % 10].fr++;
  }
  for (int c = 0; c <= 9; c++) {
    if (a[c].fr > cmax) {
      cmax =a[c].fr;
    }
  }
  for(int c=0; c<=9; c++){
    if(a[c].fr==cmax){
      cout<<a[c].poz<<" ";
    }
  }
  }

/* 
programul este eficient dpdv al timpului de executie, deoarece are o complexitate O(n), unde n reprezinta nr de elemente citite din fisier. 
programul retine pozitia si contorizeaza nr de aparitii al ultimei cifre fiecarui nr. la final gasim frecventa maxima, si afisam pozitia pt fiecare nr cu frecv maxima.

*/

ex3:

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.in");
    int x,k=0,maxx=-1,u[10]={},p[10]={};
    while(cin>>x){
        k++;
        u[x%10]++;
        p[x%10]=k;
        if(u[x%10]>maxx)
            maxx=u[x%10];
    }
    for(int i=0;i<=9;i++){
        if(u[i]==maxx){
            cout<<p[i]<<" ";
        }
    }
    return 0;
}
/*Algoritmul este eficient dpdv al timpului de execuatre, deoarece are o complexitate O(n), 
unde n reprezinta numarul elementelor din fisier.
Algoritmul este eficient dpdv al memoriei utilizate, deoarece am folosit doar trei variabile intregi si
doi vectori de frecventa.
Algoritmul utilizeaza doi vectori de frecventa: u[i] reprezinta numarul de valori din fisier care au
cifra unitatilor i, iar p[i] este pozitia in sir a ultimului numar care are cifra unitatilor i.
Dacz maxx este valoarea maxima din tabloul u, se vor afisa toate valorile p[i] pentru care nr[i]=maxx.
*/

