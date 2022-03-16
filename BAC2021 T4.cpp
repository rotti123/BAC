
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
