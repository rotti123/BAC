
II.3
   #include <iostream>
#include <cstring>

using namespace std;

int main() {

char s_CH[51], id_CH[55]={}, *p;
    char cuv[20];
  cin.getline(s_CH,50);
  p=strtok(s_CH," ");
  while(p!=NULL)
  {
    strcpy(cuv,p);
    p=strtok(NULL, " ");
  }
  strcpy(id_CH,cuv);
  strcat(id_CH,"2022");
  
cout<<id_CH;
    return 0;
}

III. 2
   #include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
int dx[5]={-1,0,1,0};
int dy[5]={0,1,0,-1};

int main() {
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int a[101][101], n, m, minv=15, k=0; ///m-linii, n-coloane
  cin>>m>>n;
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cin>>a[i][j];
    }
  }
  for(int i=0; i<=m+1; i++){
    a[i][0]=10; //col 0
    a[i][n+1]=10;// col n+1
  }
  for(int j=0; j<=n+1; j++){ ///completam cu 10 linia 0 si m+1
      a[0][j]=10; ///linia 0
      a[m+1][j]=10; /// linia m+1
  }
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      /// calc minimul dintre vecinii lui a[i][j]
      minv=15;
      if(minv>a[i+1][j]){
        minv=a[i+1][j];
      }
      if(minv>a[i][j+1]){
        minv=a[i][j+1];
      }
      if(minv>a[i-1][j]){
        minv=a[i-1][j];
      }
      if(minv>a[i][j-1]){
        minv=a[i][j-1];
      }
      ///am gasit min_vecinilor este mai mare decat a[i][j]
      if(minv>a[i][j]){
        k=k+(minv-a[i][j]);
      }
    /**
      ///calc min cu vectori de deplasare
      minv=15;
      for(int k=0;k<=3;k++){
        if(a[ i + dx[k] ][ j + dy[k] ]<minv)
          minv =a[ i + dx[k] ][ j + dy[k] ];
      }
      */
    }
  }
  cout<<k<<endl;
  ///afisarea matricei
  for(int i=0; i<=m+1; i++){
    for(int j=0; j<=n+1; j++){
      cout<<a[i][j]<<"\t";
    }
    cout<<'\n';
  }
  return 0;
}
