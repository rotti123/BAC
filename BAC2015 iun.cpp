
SII ex 5
#include <iostream>

using namespace std;

int main() {
  int n, a[21][21] = {};
  cin >> n;
  for(int j = 1; j <= n; j++) {
    cin >> a[1][j];
  }
  
  for(int i = 2; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(j == 1) a[i][j] = a[i - 1][n];
      else a[i][j] = a[i - 1][j - 1];
    }
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}
