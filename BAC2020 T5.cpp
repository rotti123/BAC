
///SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.txt");
    int x,s=0,smax=-10000000;
   while(cin>>x){
        if(s<0){
                s=x;
        }
        else s=s+x;
        if(s>smax){
                smax=s;
        }
   }
   cout<<smax;
    return 0;
}
