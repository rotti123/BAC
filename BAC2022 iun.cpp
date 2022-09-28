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

III. 2 V1
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main ()
{
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int di[4]={-1,0,1, 0};					
  int dj[4]={0, 1,0,-1};	
  
/*  k=0   newx = i + di[0] = i - 1;
          newy = j + dj[0] = j + 0;

  */
  
  int a[21][21]={},m,n,sol=0; ///m-linii, n-coloane
  cin>>m>>n;
  for(int i=1;i<=m;i++)
    {
      for(int j=1;j<=n;j++)
        cin>>a[i][j];
    }
  //bordare lin 0 si m+1
  for(int j=0;j<=n+1;j++)
    {
      a[0][j]=10;
      a[m+1][j]=10;
    }
  ///bordare col 0 si n+1
  for(int i=0;i<=m+1;i++){
    a[i][0]=10;
    a[i][n+1]=10;
  }
  
  for(int i=1;i<=m;i++)
    {
      for(int j=1;j<=n;j++)
        { ///gasesc min val dintre vecinii lui a[i][j]
          int minv=11,newx,newy;
          for(int k=0;k<=3;k++){
            newx = i + di[k];
            newy = j + dj[k];
            minv =min(minv, a[newx][newy]);
          }
          if(minv > a[i][j]){
            sol = sol + (minv - a[i][j]);
          }
        }
    }
  cout<<sol;
  return 0;
}

III. 2 V2 fara vectori de deplasare


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
