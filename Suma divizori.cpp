#include <iostream>
#include <fstream>
using namespace std;

int main() {
       long long n,d,s=0;
       cin>>n;
       for(d=1; d*d<n;d++){
               if(n%d==0){
                  s=s+d+n/d; 
               }
       }
        if(n==d*d){
                  s=s+d;
                }
       cout<<s;
    return 0;
}
