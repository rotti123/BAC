///SII
citeşte n (număr natural)
┌repetă
│ c1<-n%10; n<-[n/10]; c2<-n%10
│┌dacă c1>c2 atunci
││ c2<-c1; c1<-n%10
│└■
|  dacă c1<c2 atunci 
│   repetă
│     scrie c1
│     c2<-[c2/2]
│   până când c1>=c2
|  sfârșit dacă
└până când n≤9

///p.NrVarfuri p.Muchie p.Unghi.FataMuchie p.Unghi.FataFata

struct poliedru{
    int NrVarfuri;
    float Muchie;
    struct{
        float FataMuchie;
        float FataFata;
    }Unghi;
 }p;

///SIII ex1
#include <iostream>
#include <fstream>
using namespace std;
void generatoare(int n){
    int a,b;
    for(a=2;a<=n/2;a+=2){
        for(b=1;b<=n/a;b++){
            if(a*b+a/b==n){
                cout<<a<<"-"<<b<<" ";
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    generatoare(n);
}
///SIII ex 2
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int a[21][21],m,n,ok,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
       for(int j=1;j<=n;j++)
         {
           cin>>a[i][j];
         }
     for(int j=2;j<=n;j++)
       { ok=1;
          for(i=1;i<=m;i++)
            {
              if(a[i][j]==a[i][1]){ ///compar col 1 cu col j
                 ok=0; ///am gasit o contradictie
                 break; //iesire fortata din "for i"
              }
            }
        if(ok==1)
          cnt++;
       }
  cout<<cnt;
}

///SIII ex 3
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
  ifstream cin("bac.in");
  int x,y,cnt=1,ok=0;
  cin>>x;
  while(cin>>y)
    {
      if(x==y) cnt++;
      else 
      {
        if(cnt==2) 
        {
          cout<<x<<" ";
          ok=1;
        }
        cnt=1; //resetam contorul pt ca x!=y
      }
      x=y; ///pregatesc urmatoarea pereche
    }
  if(ok==0)
    cout<<"nu exista";
}

/*
Complexitate liniara O(n)
Eficienta a memoriei: 4 var int simple
Algoritmul testeaza  pentru oricare doua elemente citite consecutive x si y
daca sunt egale contorul creste cu 1 iar altfel se verifica daca contorul anterior 
este egal cu 2 Atunci se afiseaza numarul anterior x.
  La sfarsit daca nu exista un astfel de numar se afiseaza mesajul "nu exista". */

