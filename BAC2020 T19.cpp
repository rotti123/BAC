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
