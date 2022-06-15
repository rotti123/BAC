SIII ex 3
void interval(int n,int &a,int &b){
  int fact=1,fact2;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  a=fact/n+1;
  b=fact*(n+1)-1;
  
}

SIII ex 4
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
  ifstream cin("bac.txt");
  int x,y,v[100]={},snr,fmax=0;
    while(cin>>x){
      while(x>=10){
        snr=x%100;
        x/=10;
        v[snr]++;
      }
    }
   for(int i=10;i<100;i++){
        if(v[i]>fmax){
          fmax=v[i];
        }
    }
    for(int i=10;i<100;i++){
      if(v[i]==fmax){
        cout<<i<<" ";
      }
    }

}
  
