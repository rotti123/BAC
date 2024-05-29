SIII ex 3
  #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void identice(int a,int b)
{
    int x=1,cif,masc=1,ok=0;
    while(x<=b){
        for(cif=1;cif<=9;cif++){
            x=masc*cif;
            if(x>=a && x<=b){
                cout<<x<<" ";
                ok++;
            }
        }
        masc=masc*10+1;
    }
    if(ok==0){
        cout<<"nu exista";
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    identice(a,b);

    return 0;
}


SIII ex 4
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{  
  ifstream cin("bac.txt");
  int m, n, x, min_a, max_a, poz = 0;
  int y;
  cin >> m >> n;
  for(int i = 1; i <= m; i++) {
    cin >> x;
    if(i == 1) min_a = x;
    if(i == m) max_a = x;
  }  /// x  min_a   max_a     y
  cin >> x;
  for(int i = 2; i <= n; i++) {
    cin >> y;
    if(x < min_a && max_a<y) {
      poz = i;
      break;
      }
    x = y;
  }
  if(poz != 0) cout << poz;
  else cout << "imposibil";
}
/*
  Complexitatea algoritmului este O(n+m), n si m fiind numarul de elemente asociat fiecarui sir citit.
  Algoritmul citeste sirul cu m elemente si retine valoarea maxima si valoarea minima din el. Apoi parcugrem sirul cu n elemente si verificam daca intre doua valori consecutive, putem intercala minimul si maximul din sirul anterior, in acest caz afisam pozitia pe care va fi pus primul element din sirul cu m elemente, in caz contrar afisam "imposibil".
*/
