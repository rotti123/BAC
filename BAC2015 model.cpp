II.5
#include <iostream>
using namespace std;
int main() {
  int m,n, a[21][21],k=1;
  cin>>m>>n;
  for (int i=m; i>=1; i--) {
    for (int j=n; j>=1; j--) {
      if (k%3==0) {
        k=k+2;
      }
      a[i][j]=k;
      k=k+2;
    }
  }
  for (int i=1; i<=m; i++) {
    for (int j=1; j<=n; j++) {
      cout << a[i][j] << " ";
      }
    cout << endl;
    }
    
}

#include <iostream>
#include <fstream>
using namespace std;
void subperfect(int a ,int b ){
     int x,sp,ok=0;
     for(x=b;x>=a;x=x-1){
        sp=0;
        for(int d=2;d<=x/2;d++){
            if(x%d==0){
                sp=sp+d;
            }
        }
        if(sp>x){
            cout<<x<<" ";
            ok++;
        }

     }
     if(ok==0){
        cout<<"nu exista";
     }


}


int main()
{
    ifstream cin("bac.txt");
    int n,x,p,v[10]={},k=0;
    cin>>n;
    while(cin>>x){
        p=0;
        while(x!=1){
            x=x/2;
            p++;
        }
        v[p]++;
    }
    p=9;
    while(k+v[p]<n && p>=0){
        k=k+v[p];
        p--;
    }
      if(p<0){
        cout<<"Nu exista";
      }
      else{
        x=1;
        for(int i=1;i<=p;i++){
            x=x*2;
        }
        cout<<x;
      }
}



