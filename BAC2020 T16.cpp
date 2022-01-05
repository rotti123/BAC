///SIII ex2
#include <iostream>

using namespace std;

int main() {
    int a[100][100]={},m,n,k=1;
    cin >> n >> m;
    for(int i=n;i>=1;i--){
        for(int j=m;j>=1;j--){
            a[i][j]=k*k;
            k+=2;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
