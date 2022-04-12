///SIII ex1

#include <iostream>
#include <fstream>

using namespace std;

void prime(int n,int &x,int &y)
{  x=0;
   y=0;
  int k=n-1;
  bool ok=1;
  while(k>1){
    for(int d=2;d*d<=k;d++){
      if(k%d==0){
        ok=0;
        break;
      }
    }
    if(ok==1 && y==0) y=k;
    else if(ok==1){
      x=k;
      return;
    }
    ok=1;
    k--;
  }
}

int main()
{  int n,x,y;
  cin>>n;
  prime(n,x,y);
  cout<<x<<" "<<y;
  return 0;
}

///SIII ex 2
