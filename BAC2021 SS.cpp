///SIII ex 1
#include <iostream>
#include <fstream>
using namespace std;

int putere(int n){
  int i=2,sol,pmin=10000000;
  while(n!=1)
  {
    int p=0;
    while(n%i==0){
      n=n/i;
      p++;
    }
    if(p<pmin&&p!=0){
      pmin=p;
      sol=i;
    }
    i++;
  }
  return sol;

}
int main() {
  ifstream cin("test.in");
  int n;
  cin>>n;
  cout<<putere(n);
 
}



///SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream cin("test.in");
  int v[11]={},i,x, suma=0;
  while(cin>>x){
    if(v[x]==0){
      suma=suma+10;
    }
    v[x]++;
  }
  for(i=1;i<=10;i++)
    suma=suma+i*i*v[i];
  cout<<suma;
}


///SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream cin("bac.in");
  ofstream cout("bac.out");
    int x,a,b,c,n;
    cin>>b>>a;
    n=(a-b)/2;
    cout<<a<<" "<<b<<" ";
    while(n!=1){
      n--;
      c=b-n*2;
      
      b=c;
      cout<<c<<" ";
    }
   
}
