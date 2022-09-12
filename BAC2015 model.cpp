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
