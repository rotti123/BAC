///SIII ex 1:
#include <iostream>

using namespace std;

int factori(int n, int m){
    int c=0;
    for(int d=2;d<=n;d++){
        if(n%d==0 && m%d==0){
            c++;
            while(n%d==0){
                n=n/d;
            }
            while(m%d==0){
                m=m/d;
            }
        }else{
            while(n%d==0){
                n=n/d;
            }
            while(m%d==0){
                m=m/d;
            }
        }
    }
    return c;
}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<factori(n,m);
}

///SIII ex2
#include <iostream>

using namespace std;

int main() {
    int n,a[21][21];
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=abs(n-(i+j)+1);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<' ';
        }cout<<endl;
    }
}

///SIII ex3


https://pastebin.com/DqzmX88h
