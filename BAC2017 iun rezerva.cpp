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
SII.5
  
  #include <fstream>
#include <iostream>
using namespace std;

void produs(int a, int &k) {
  int m = 1, p = 1;
  while (p * (m + 2) <= a) {
    p = p * (m + 2);
    m = m + 2;
  }
  k = m;
}

int main() { 
  int m,n, a[51][51],x1,x2,min1=10000,min2=10000;
  cin>>m>>n;
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cin>>a[i][j];
    }
  }
  for(int i=1; i<=n; i++){
    if(a[i][1]<min1){
      min1=a[i][1];
      x1=i;
    }
    if(a[i][m]<min1){
      min2=a[i][m];
      x2=i;
    }
  }
  int aux=0;
  aux=a[x1][1];
  a[x1][1]=a[x2][m];
  a[x2][m]=aux;
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cout<<a[i][j];
    }
    cout<<endl;
  }
  return 0; 
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
