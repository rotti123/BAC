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
