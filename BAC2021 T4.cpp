
///SIII ex 1
#include <iostream>
#include <fstream>
using namespace std;

int joc(int n){
  int k=0;
  for(int i=1;i<=n/2;i++){
    if(n%i==0) k++;
  }
  return k;
}

int main() {
  ifstream cin("bac.txt");
  int n=12;
  cout<<joc(n);
}


///SIII ex2
#include <iostream>

using namespace std;

int main() {
  int m, n, a[101][101] = {}, maxx;
  cin >> m >> n;
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < m; i++) {
    maxx = -1;
    for(int j = 0; j < n; j++) {
      if(a[i][j] > maxx && a[i][j] < 21)
        maxx = a[i][j];
    }
    if(maxx == -1) cout << "nu exista" << endl;
    else cout << maxx << endl;
  }
}

//SIII ex3
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac1.txt");
ifstream g("bac2.txt");
int main() {
  int n,m,x,y,i,j,k,ok=0;
  f>>n>>x;
  g>>m>>y;
  i=1; j=1;
  while(i<=n && j<=m){
    if(x<y){
      if(x%5==0)
        cout<<x<<" ", ok=1;
      i++;
      f>>x;
    }
    else if(x==y){
      i++; j++;
      f>>x;
      while(x==y && i<=n){
        f>>x;
        i++;
      }
      int a=y;
      g>>y;
      while(y==a &&  j<=m){
        g>>y;
        j++;
      }
    }
    else if(x>y){
      if(y%5==0)
       cout<<y<<" ", ok=1;
        j++;
        g>>y;
    }
  }
  if(i<=n){
    for(int poz=i; poz<=n; poz++){
      if(x%5==0)
        cout<<x<<" ", ok=1;
      f>>x;
    }
  }
  if(j<=m){
    for(int poz=j; poz<=m; poz++){
      if(y%5==0)
        cout<<y<<" ", ok=1;
      g>>y;
    }
  }

  if(ok==0)
    cout<<"nu exista";

}

