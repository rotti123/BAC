SIII ex 3
#include <iostream>
using namespace std;
int minDivPrim(int n)
{
  int x=1,p,d=2;
  while(n>1){ ///n=d1^p1*d2^p2*..dk^pk
    p=0; ///exponentul factorului prim
    while(n%d==0){ /// d^p
      p=p+1;
      n=n/d;                       
    }
    if(p!=0){
      x=x*d;
    }
    d++;
  }
  return x;
}
int main() {
    int n,d;
    cin>>n;
    cout<<minDivPrim(n);
    return 0;
}
