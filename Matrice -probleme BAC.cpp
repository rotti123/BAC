///Inserare a mediei aritmetice pe linia din mijloc a matricei
/*
4 4
1 2 3 4           1 2 3 4 
4 3 2 1     -->   4 3 2 1 
5 5 5 5           4 4.25 4.5 4.75 
6 7 8 9           5 5 5 5 
                  6 7 8 9
*/

#include <bits/stdc++.h>
using namespace std;

 
int main() {
   ifstream cin("test.in");
   ofstream cout("test.out");
   
    int n,m;
    float a[100][100]={},ma=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cin>>a[i][j];
      }
    }
  ///Parte program Maurice
    for(int j=1;j<=m;j++){
      ma=0;
      for(int i=1;i<=n;i++){
        ma=ma+a[i][j];
      }
      a[0][j]=ma/n;
    }
    
///Jurjiu Cristi -translatare a doua 1/2 in jos
   for(int i=n;i>=n/2+1;i--){
      for(int j=1;j<=m;j++){
        a[i+1][j]=a[i][j];
      }
   }
   



/*
////Popa Madalin -translatare a doaua 1/2 in jos
   for (int i = n ; i >= n / 2 + 1; i--){
     for (int j = 1; j <= m; j++){
       a[i+1][j] = a[i][j];
     }
   }
*/
///Ilea Robert - insereaza la mijloc media
  for(int j=1;j<=m;j++){
      a[n/2+1][j]=a[0][j];
  }
  n++;
  for(int i=1; i<=n; i++,cout<<endl)
    for(int j=1; j<=m; j++)
      cout<<a[i][j]<<" ";
    return 0;
}

///O(C*n*m) = O(n*m)
