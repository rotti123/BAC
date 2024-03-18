SII ex 4
  #include <iostream>
#include <fstream>
#include <cstring>

using  namespace std;

int main()
{
 char b[21];char a[21]={};
  cin.getline(b,21);
   strncpy(a,b,strlen(b)/2);
  // a[strlen(b)/2]='\0';
    cout<<a;
}


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

SIII ex 3
int Fibo(int n) {
    int cnt = 2;
    int a = 1, b = 1, c;
    if(n <= 2) return 1;
    while(cnt != n) {
        c = a + b;
        if(c % 2 == 1) {
            cnt++;
            if(cnt == n) return c;
        }
        a = b;
        b = c;
    }
}

SIII ex 4
  #include <iostream>

using namespace std;

int main() {
    int nr, vf[101] = {}, last = -1;
    bool ok = false;
    while(cin >> nr) {
        vf[nr] = 1; ///marcam toate valorile din sir care au fost citite
    }
    for(int i = 0; i <= 100; i++) {
        if(vf[i] != 0) {
            if(last == -1) {/// gasim cea mai mica valoare din sir
                last = i;
            }
            else { ///daca am gasit deja o valoare existenta
                if(i - last >= 2) {
              ///verificam daca lungimea intervalului [last,i] este corespunzatoare
                    cout << last << ' ' << i << endl;
                    ok = true;
                  }
                last = i; ///resetam ultima aparitie a unei valori din sir
            }
        }
    }
  if(ok == false) cout << "nu exista";
}
