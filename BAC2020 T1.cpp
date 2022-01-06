///SIII ex 2
#include <iostream>

using namespace std;

int main() {
    int n,k,a[21][401],val=0;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        val=i-1;
        for(int j=1;j<=n*k;j++){
            if(j%k==1){
                val++;
            }
            a[i][j]=val;
            cout<<a[i][j]<<" \t";
        }
        cout<<endl;
    }
    return 0;
}
