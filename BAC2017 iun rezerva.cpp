https://www.pbinfo.ro/resurse/9dc152/examene/2017-iunie/E_d_Informatica_C_sp_MI_2017_var_05_LRO.pdf

SII.3
  void produs(int a, int &k){
  int m=1,p=1;
  while(p*(m+2)<=a){
    p=p*(m+2);
    m=m+2;
  }
  k=m;
}

SIII.4
  #include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream cin("bacul.txt");
  int x, y, lung = 1;
  cin >> x;
  while(cin >> y){
    if(x == y) lung ++;
    if(x != y){
      if(lung % 2 != 0){
        cout << x;
        return 0;
      }
      else{
        lung = 1;
      }
    }
    x = y;
  }
  if(lung % 2 != 0){
        cout << x;
        return 0;
      }
  cout << "nu exista";
  return 0;
}
