SIII ex 2
  #include <iostream>

using namespace std;

int main()
{
    int n, m, k, a[100][100] = {}, cnt = 0;
    bool ok;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        ok = true;
        if(i == k) continue;
        for(int j = 0; j < m; j++) {
            if(a[i][j] == a[k][j])
                ok = false; ///nu e linie complementara
        }
        if(ok == true) cnt++;
    }
    if(cnt == 0) cout << "NU";
    else         cout << "DA";
    return 0;
}

SIII ex 3.
  #include <iostream>
#include <fstream>
using namespace std;
int main()
{
 // ifstream cin ("bac.txt");
  int a, b, ok = 0;
  cin >> a;
  if (a % 2 == 0){
    cout << a<<" ";
    ok=1;
  }
  while (cin >> b)
    {
      if (b % 2 == 0 && b != a)
      {
        cout << b << ' ';
        ok = 1;
      }
      a = b;
    }
  if (ok == 0)
  {
    cout << "nu exista";
  }
}

