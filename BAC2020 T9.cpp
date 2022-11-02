SI
1d 2b 3a 4c

2020*(x/2020) ==x

SII 1a
i=1,..2
j=1,..3

i=1 	1 1 1 
t=2
i=2
	2 2 2 
t=3

	3 3

1 1 1 2 2 2 3 3

 
SII 1d
...
i<-n%k
cat timp ( i >= 1) executa
  scrie t,' '
  i <-i-1
sf cat timp

SII 2
 f(2020)=0 + f(101)
f(101)=1+f(5)
f(5)=5+f(0)
f(0)=0

SIII ex 1

#include <iostream>
using namespace std;
void suma(int n, int&s){
  int v[10]={},c;
  s=0;
  while(n!=0){
    c=n%10;
    n=n/10;
    if(c%2!=0 && v[c]==0){
      v[c]++;
      s=s+c;
    }

  }
}
int main() {
int n,s;
n=4713835;
suma(n,s);
cout<<s;
    return 0;
}


SIII ex 2
	
	/*var 1*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    char *p,c[21][21],pref[21];
    cin>>n;
    cin.ignore();
    for(int i=1;i<n;i++){
      cin.getline(c[i],20);
    }
    cin.getline(pref,20);
    for(int i=1;i<n;i++){
      p=strstr(c[i],pref);
      if(p!=NULL && strcmp(p,c[i])==0 && strcmp(pref,c[i])!=0){
        cout<<c[i]<<" ";
      }
    }
    return 0;
}

	/*var 2*/
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  int n,ok=0;
  char a[21][21], *p;
  cin>>n;
  cin.ignore();
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for(int i=0; i<n-1; i++){
    p=strstr(a[i], a[n-1]);
    if(strcmp(p,a[i])==0){
      ok=1;
      cout<<a[i]<<" ";
    }
  }
  if(ok!=1){
    cout<<"nu exista";
  }

return 0;
}


SIII ex 3
#include <iostream>
#include <fstream>

using namespace std;

int main() {
   //ifstream cin("bac.txt");
   int k,x,lung=0,lmax=0,cnt=0;
   cin>>k;
   while(cin>>x){
       if(x%k==0){ //x face parte din secventa
           lung++;
       }
       else {
           if(lung>lmax){ //am gasit o noua lungime maxima
               lmax=lung;
               cnt=1;
           }
           else if(lung==lmax){ //am gasit aceeasi lungime maxima
               cnt++;
           }
            lung=0;
       }
   }
   if(lung>lmax){ //am gasit o noua lungime maxima
               lmax=lung;
               cnt=1;
           }
           else if(lung==lmax){ //am gasit aceeasi lungime maxima
               cnt++;
           }
   cout<<lmax<<" "<<cnt;
    return 0;
}
/* Algoritmul este eficient dpdv al timpului de executie, deoarece are o complexitate O(n), 
unde n reprezinta numarul elementelor din sir.
Algoritmul este eficient dpdv al memoriei, deoarece folosim doar 5 variabile simple.
Algoritmul se bazeaza pe urmatorul principiu:
In cazul in care un element x din sir face parte din secventa crestem lungimea secventei;
Daca x nu face parte din secventa atunci verificam lungimea secventei anterioare si o comparam cu lungimea maxima
Avem 2 cazuri ce trebuiesc tratate, si anume cand lungimea este mai mare decat lungimea maxima si cand lungimea este
egala cu lungimea maxima;
La sfarsit afisam datele cerute.
*/
-Ilea Robert-
SI:
1.d
2.b
3.a
4.c

SII:
1)

a) 1 1 1 2 2 2 3 3
b) 46 50
c)

#include <iostream>

using namespace std;

int main() {
    int n,k,t,i,j;
    cin>>n>>k;
    t=1;
    for(i=1;i<=n/k;i++){
        for(j=1;j<=k;j++){
            cout<<t<<" ";
        }
        t+=1;
    }
    for(i=n%k;i>=1;i--){
        cout<<t<<" ";
    }
    return 0;
}

d) citeste n,k
   t<-1
   pentru i<=1,[n/k] executa
         pentru j<-1,k executa
		scrie t, ' '
         sfarsit pentru
      t<-t+1
   sfarsit pentru
   i<-n%k
   cat timp i>=1 executa
        scrie t, ' '
        i--;
   sfarsit cat timp

2) f(0) = 0
   f(2020) = 6
  
3) 3 
   4,7

SIII:
1)

void suma(int n,int &s){
    int c,a[10]={0};
    s=0;
    while(n!=0){
        c=n%10;
        if(c%2==1 && a[c]==0){
            s=s+c;
            a[c]++;
        }
        n/=10;
    }
    cout<<s;
}

3)
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream cin("bac.txt");
    int k,lmax=-1,lung=0,p=0,y;
    cin>>k;
    while(cin>>y){
        if(y%k==0){
            lung++;
        }
        else{
            lung=0;
        }
        if(lung>lmax){
            lmax=lung;
            p=1;
        }
        else if(lmax==lung){
            p++;
        }
    }
    cout<<lmax<<" "<<p;
    return 0;
}
/* Algoritmul este eficient din punct de vedere al timpului de executie 
   deoarece are o complexitate O(n) unde n reprezinta numarul de elemente 
   citite din fisier.
   Algoritmul este eficient din punct de vedere al memoriei deoarece am
   folosit doar 5 variabile simple de tip intreg.
   Pasii facuti de program sunt:
     -Citeste valoarea k cu care urmeaza sa comparam celelate elemente din sir.
     -Citeste in mod repetat valorile din sir
     -Daca gaseste o valoare care se divide cu numarul k atunci crestem lungimea
      secventei.
     -Daca valoarea citita nu se devide cu k atunci lungimea va redeveni 0
     -daca gasim o lungime mai mare decat precedenta atunci o actualizam si 
      marim aparitia acesteia.
     -daca lungimea maxima este egala cu lungimea unei secvente atunci marim
      aparitia acesteia.
     -afiseaza lungimea maxima si numarul ei de aparitii
 */
   
   
   







