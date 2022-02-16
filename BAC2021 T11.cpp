///SII ex1 b) !!!!!!!!!!!!!

/// SIII ex1 
#include <iostream>
 
using namespace std;
 
void imog(int x, int y , int &rez){
    int p=1,m=0,n=0,c;
    while(x!=0){
        c=x%10;///
        x/=10;
        if(c%2==1) m=m*10+c;/// construiesc numarul fara cifrele pare inversat
    }
    p=1;
    while(y!=0){
        c=y%10;
        y/=10;
        if(c%2==1){
            n=n+c*p;
            p*=10;
        }
    }
    if(m==n && m!=0) rez=1;
    else             rez=0;
}
 
int main() {
    int x,y,rez;
    cin >> x>>y;
    imog(x,y,rez);
    cout<<rez;
    return 0;
}
