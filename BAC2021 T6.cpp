//SIII ex 1
#include <iostream>
#include <cstring>
using namespace std;

void numar(int n,int c,int &m){
    int p=1,ok=0,cif;
    m=0;
    while(n!=0){
        cif=n%10;
        n/=10;
        if(cif!=c){
           ok=1;
           m=m+cif*p;
           p*=10;
        } 
    
    }
    if(ok==0) m=-1;
    
}

int main() {
    int n,c,m;
    cin >> n >> c;
    numar(n,c,m);
    cout<<m;
    return 0;
}


SIII ex 3
    
    #include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream cin("bac.txt");
  int x, a, b, c, k=0, kn=0;
  /// k= contorul pentru elem curent din sir
  /// kn= contor numere negative
  //a= poz primului element negativ din sir
  //b= poz II   -||-
  //c= poz III   -||-
  while(cin>>x){
    k++;
    if(x<0){
      kn++;
      if(kn==1){
        a=k;
      }
      if(kn==2){
        b=k;
      }
      if(kn==3){
        c=k;
      }
    }
  }
  int l1, l2, l3;
  l1=b-1;
  l2=(c-1)-(a+1)+1;
  l3=k-(b+1)+1;
  cout<<max(l1,max(l2,l3));
  return 0;
}

/*
Algoritmul citeste din fisier sirul dat, verificand daca  numarul citit este negativ. In acest caz retinem pozitia acestuia. Presupunem ca avem numerele negative pe poz a, b si c, si lungimea sirului este k. Atunci vom alege lungimea maxima dintre urmatoarele secvente: 
L1=b-1
L2=(c-1) -(a+1)+1
L3=k-(b+1)+1



15 21 -61 9 870 -23 11 5 8 -81  5 14

1  2   3  4  5   6  7  8 9  10 11 12
       a         b          c

S1  1..5  L1=b-1
S2  4..9  L2=(c-1) -(a+1)+1
S3  7..12 L3=k-(b+1)+1

cout<<max(l1,max(l2,l3))

*/
