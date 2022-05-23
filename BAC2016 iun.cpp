
SIII. 3.
#include <iostream>
using namespace std;
int cifreImpare(int n)
{
    int x=0,p=1,c,cnt=0,cnti=0;
    while(n){
      if(n%2==0){
        cnt++;
        c=n%10;
        x=x+c*p;
        p*=10;
      }
      else cnti++;
      n/=10;
    }
    ///cnti==0 || cnt==0
    if(cnti==0){ 
      x=-1;
    }
    else if(cnt==0) x=-1;
    return x;
    
}

int main() {
    int n,d;
    cin>>n;
    cout<<cifreImpare(n);
    return 0;
}
