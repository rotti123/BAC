
u
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

III.1
   #include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

void secventa(int &n){
  int p=1,m=0;
  while(n!=0){
    if(n%100==22){
      m=m+p*0;  //adaug cifrele 2,0 de la stg la drp
      p=p*10;
      m=m+p*2;
      p=p*10;
      n=n/100;
    }
    else{
      m=m+p*(n%10);  ///adaug ultima cifra (din n) in m
      p=p*10;
      n=n/10;
    }
  }
  n=m;
  
}
int main() {
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int n;
  cin>>n;
  secventa(n);
  cout<<n;
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


III. 3.
   #include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int x, y, a=0, b, k=0, ok=1;
  cin>>x>>y;
  while(cin>>b && ok){
    if(a!=b && b>=x && b<=y){
      k++;
    }
    if(b>y){
      ok=0;
    }
    a=b;
  }
  cout<<k;
  return 0;
}
/**
programul este eficient dpdv al memoriei, deoarece foloseste doar 6 variabile simple.
algoritmul este eficient dpdv al timpului de executie, deoarece are o complexitate O(n), unde n este nr de elemente din fisier.
programul verifica daca elementul curent citit din fisier apartine intervalului si este diferit de elementul anterior, pentru a putea fi contorizat.

*/
