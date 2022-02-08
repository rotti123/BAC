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
