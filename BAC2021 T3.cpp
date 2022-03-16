

///SIII ex 1
#include <iostream>

using namespace std;


int prim(int n){
   if(n<=1) return 0;
    for(int d=2;d*d<=n;d++){
        if(n%d==0){
            return 0;
        }
    }
    return 1;
}
int suma(int n){
  int s=1;
  for(int i=2;i<=n;i++){
      if(n%i==0 && prim(i)==0){
        s=s+i;
      }
  }
  return s;
}
int main() {
    int a, b;
    cin >> a;
    cout << suma(a);
    return 0;
}


///SIII ex 2
#include <fstream>
#include <iostream>
using namespace std;

void citire(int a[][21], int &n, int &m) {
    cin >> n >> m;
  for (int i = 1; i<=n; i++) {
    for (int j = 1;j<=m; j++) {
        cin >> a[i][j];
  }
}
}


void cautareVF(int a[21][21], int n, int m) {
    int v[401]={}, ok=0;
  for(int i = 1; i<=n; i++) {
      v[a[i][1]]++;
      if(v[a[i][1]]==2 && a[i][1]!=0){
          cout<<a[i][1]<<" ";
          ok=1;
      }
      v[a[i][m]]++;
      if(v[a[i][m]]==2 && a[i][m]!=0){
          cout<<a[i][m]<<" ";
          ok=1;
      }
    }
  if(ok==0){
      cout<<"Nu exista";
  }
}
void cautareSEL(int a[21][21], int n, int m) {
    int ok=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(a[i][1]==a[k][m] && a[i][1]!=0){
               ok=1;
               cout<<a[i][1]<<" ";
            }
        }
    }
}

int main() {
    int a[21][21], n, m;
    citire(a, n, m);
    cautareSEL(a, n, m);
    return 0;
}

///SIII ex 3
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream cin("bac.in");
    int f[10]={},z,v[10]={},k=0,fmax=0,a;
    while(cin>>a){
        k++;
        z=a%100/10; //cifra zecilor
        f[z]++; //crestem frecventa pt nr z
    
        v[z]=k; //ultima pozitie a lui z (cifra zecilor) intr-un nr
    }
    for(int i=0; i<10; i++){
        if(f[i]>fmax){
                fmax=f[i];
        }
    }
    for(int i=0; i<10; i++){
        if(f[i]==fmax){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}


