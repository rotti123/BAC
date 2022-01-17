
SIII ex1

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i-- ){
        cout<<i*i*i<<" ";
    }
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


