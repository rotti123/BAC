///SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream cin("bac.in");
  ofstream cout("bac.out");
    int a[11]={},x,elem=0,sum=0;
    while(cin>>x)
    {
      if(a[x]==0) elem++;
      a[x]++;
    }
   for(int i=1;i<=10;i++)
   {
     sum+=a[i]*i*i;
   }
   sum+=elem*10;
   cout<<sum;
}
