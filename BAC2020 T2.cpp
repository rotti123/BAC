///SIII ex1
#include <iostream>

using namespace std;
void fii(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<"("<<i<<' '<<n/i<<") ";
        }
    }    
}

int main() {
    int n;
    cin >>n;
    fii(n);
    return 0;
}
