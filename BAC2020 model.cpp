//SIII ex 1
#include <iostream>
#include <fstream>

using namespace std;

void duplicare(int n,int &d){
  d=0;
  int k=0,c,p=1;
  while(n!=0){
    c=n%10;
    n=n/10;
    if(c%2==0){
      d=d+c*p;
      p=p*10;
    }
    else{
      d=d+c*p;
      p=p*10;
      d=d+c*p;
      p=p*10;
    }
  }
}
int main()
{  
  int n,d;
  cin>>n;
  duplicare(n,d);
  cout<<d;
}
