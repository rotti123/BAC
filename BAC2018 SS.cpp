SII ex 5
  #include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[101]={}, *p, aux[101]={}, sol[101]={};
    int ok=0;
  cin.getline(s,100);
  p=strtok(s," ");
  while(p!=NULL){
    strcpy(aux,p);
    if(strchr("0123456789", aux[0])!=NULL){
      if(ok==0){
        ok=1;
        strcpy(sol,aux);
      }
      else{
        if(aux[0]>sol[0]){
          strcpy(sol,aux);
        }
      }
    }
    p=strtok(NULL," ");
  }
  if(ok==0){
    cout<<"nu exista";
  }
  else cout<<sol;
  return 0;
}

SIII ex 3
  int echilibrat (int n){
    int c,sp=0,si=0,poz=0;
    while(n!=0){
        c=n%10;
        n/=10;
        if(poz%2==0){
          sp=sp+c;
        }
        else{
          si=si+c;
        }
      poz++;
    }
  if(sp%2==0 && si%2==1){
    return 1;
  }
  else return 0;
}

SIII ex 4.
#include <iostream>
#include <fstream>

using namespace std;

struct element{
   int st;
   int dr;
}a[10];

int main()
{
    ifstream cin ("bac.txt");
    int x,poz=0,lmax=0,lung=0;
    while(cin>>x){
       poz++;
       if(a[x].st==0){
        a[x].st=poz;
       } /// prima aparitie a lui x
       a[x].dr=poz;
    }
    for(int i=0;i<=9;i++){
        lung=a[i].dr-a[i].st+1;
        if(lung>lmax){
            lmax=lung;
        }
    }
    cout<<lmax<<endl;
    for(int i=0;i<=9;i++){
        lung=a[i].dr-a[i].st+1;
        if(lung==lmax){
            cout<<i<<" ";
        }
    }
    return 0;
}
/** Algoritmul este eficient dpdv al timpului de executie deoacere
are o complexitate O(n), unde n repr nr de elemente din fisier.
Am definit o structura ce retine pentru fiecare cifra prima si ultima aparitie
in sir. In urma parcurgerii tuturor elementelor din fisier am stabilit
prima si ultima aparitie a acelor valori distincte.
Ulterior am stabilit lungimea maxima a unei secvente incadrate.
Am afisat aceasta valoare.
In final am afisat crescator toate elementele care au lungimea secventei
incadrate asociata egala cu lungimea maxima.
*/
