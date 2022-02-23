SIII ex 1
  #include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

void divizori (int a,int b,int k, int &nr){
  nr=0;
  for(int i=a; i<=b; i++){
    if(i%k==0 && i%10==k){
      nr++;
    }
  }
}
int main() {
  ifstream cin("bac.txt");
  int a, b, k, nr;
  cin>>a>>b>>k;
  divizori(a,b,k,nr);
  cout<<nr;
}
 
 SIII ex 2
   #include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  ifstream cin("bac.txt");
  char s[101], *p, voc[6]="aeiou";
  int k=0, ok=0;
  cin.getline(s,100);
  p=strtok (s," "); //am gasit primul cuvant
  while (p!=NULL){
  k=0;
    for (int i=0; i<=4; i++){
      if (strchr(p,voc[i])!= NULL){
        k++;
      }
    }
    if(k==1){
       cout<<p<<"\n";
      ok=1;
      }
    p=strtok (NULL," "); // preluam urm cuvant
  }
  if (ok==0)
    cout<<"nu exista";
}
 
 
