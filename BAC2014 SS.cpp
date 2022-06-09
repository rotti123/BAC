//SIII e4
#include <iostream>

using namespace std;

int main()
{
  int a,b,k=1,lmax=0,val;
  cin>>a;
  while(cin>>b){
    if(a==b){
      k++;
    }
    else{
      k=1;
      if(k>=lmax){
        lmax=k;
        val=b;
      }
    }
    a=b;
  }
  if(k>=lmax){
    lmax=k;
    val=b;
  }
  cout<<lmax<<'\n';
  for(int i=1;i<=lmax;i++){
    cout<<val<<" ";
  }
    return 0;
}
