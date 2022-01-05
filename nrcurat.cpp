#include <iostream>
#include <fstream>
using namespace std;

int oglindit(int n){
    int c,ogl=0;
    while(n!=0){
        c=n%10;
        n/=10;
        ogl=ogl*10+c;
    }
    return ogl;
}
int urma(int n){
    
    int x=n,nr9=0;
    while(x!=0){
        x/=10;
        nr9=nr9*10+9;
    }
    return nr9-n;
}

int main() {
    ifstream cin("nrcurat.in");
    ofstream cout("nrcurat.out");
    int n,x,inv,ur;
    while(cin>>n){
        inv=oglindit(n);
        ur=urma(n);
        if(inv==ur) cout<<"1 ";
        else cout<<"0 ";
    }
    return 0;
}
