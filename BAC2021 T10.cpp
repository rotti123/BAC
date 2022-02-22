<Ilea Robert>
SI:
1.b
2.c
3.b
4.d
5.c

SII:
1)
a)ABABABAB
b)19 20
c)
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    if(x<y){
        x=x-y;
        y=x+y;
        x=y-x;
    }
    while(x>=y){
        cout<<"A";
        x=x-y;
        if(x%2==0){
            cout<<"A";
        }
        else{
            cout<<"B";
        }
    }
    return 0;
}
d)
citeste x,y(numere naturale)
daca x<y atunci
   x<-x-y; y<-x+y; x<-y-x;
sfarsit daca
executa
   scrie 'A'
   x<-x-y;
   daca x%2=0 atunci scrie 'A'
   sfarsit daca
   altfel scrie 'B'
   sfarsit altfel
pana cand x<y;

2) 
struct elev{
	int cod;
        float nota1,nota2;
}y[30]

3) pom
   verde

SIII:
1)
int armonie(int x, int y){
    int s=0,s1=0,s2=0;
    s=x+y;
    for(int d=1;d<=x;d++){
        if(x%d==0){
            s1=s1+d;
        }
    }
    for(int d=1;d<=y;d++){
        if(y%d==0){
            s2=s2+d;
        }
    }
    if(s>s1 && s<s2) return 1;
    else return 0;
}

2)
#include <iostream>
using namespace std;



int main() {
    int m,n,a[20][20]={},k=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
   for(int i=1;i<=m-1;i++){
        for(int j=1;j<=n-1;j++){
            if(a[i][j]==a[i+2][n]){
                cout<<a[i][j]<<" ";
            }
        }
    }
    return 0;
}
3)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.txt");
    int x,y,k=1;
    cin>>x;
    while(cin>>y){
        if(y<x){
            k++;
        }
    }
    cout<<k;
    return 0;
}
/*Algoritmul este eficient din punct de vedere al timpului de executie,
  avand o complexitate O(n),unde n reprezinta numarul elementelor din
  sir;
  Algoritmul este eficient din punct de vedere al memoriei deoarece am
  utilizat doar 3 variabile intregi simple.
  Programul executa urmatorii pasi:
  -citeste prima valoare si o si retine.
  -citeste in mod repetat urmatoarele valori
  -daca gasim o valoare mai mica decat prima valoare atunci marim 
  numarul de elemente mai mici decat primul.
  -la final afiseaza numarul de elemente ce indeplinesc conditia 
  impusa anterior.*/


