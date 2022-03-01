
SIII ex1

void cuburi(int n){
  for(int i=n;i>=1;i--){
    cout<<i*i*i<<' ';
  }
} 

int main() {
  int n;
  cin >> n;
  cuburi(n);
}

SIII ex 2
#include <iostream>
using namespace std;

void genmat(int k,int n,int a[][100])
{
  for(int j=0;j<n;j++){
    a[0][j]=k+j;
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<n;j++){
      a[i][j]=a[i-1][j]+(k-1);
    }
  }
}
void afisare(int n,int a[][100])
{
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<'\n';
  }
}
int main() {
  int k,n,a[100][100]={};
  cin>>k>>n;
  genmat(k,n,a);
  afisare(n,a);
  return 0;
}




S III EX 3
    #include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int na, nb, x, u, z, a[100]={}, b[100]={}, aux;
   cin>>na>>nb;
   for(int i=1;i<=na;i++){
       cin>>x;
       u=x%10;
       z=(x%100)/10;
       if(z>u){
           aux=z;
           z=u;
           u=aux;
       }
       x=z*10+u;
       a[x]++;
   }
   for(int i=1;i<=nb;i++){ 
       cin>>x;
       u=x%10;
       z=(x%100)/10;
       if(z>u){
           aux=z;
           z=u;
           u=aux;
       }
       x=z*10+u;
       b[x]++;
   }
   long long sol=0;
   for(x=0;x<=99;x++){
      sol+=a[x]*b[x];
   }
   cout<<sol;
    return 0;
}


