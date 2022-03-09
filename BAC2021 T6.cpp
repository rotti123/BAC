//SIII ex 1
#include <iostream>
#include <cstring>
using namespace std;

void numar(int n,int c,int &m){
    int p=1,ok=0,cif;
    m=0;
    while(n!=0){
        cif=n%10;
        n/=10;
        if(cif!=c){
           ok=1;
           m=m+cif*p;
           p*=10;
        } 
    
    }
    if(ok==0) m=-1;
    
}

int main() {
    int n,c,m;
    cin >> n >> c;
    numar(n,c,m);
    cout<<m;
    return 0;
}
