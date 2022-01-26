
///SII ex 3
#include <iostream>

using namespace std;

int main() ///antetul functiei main
{      
  int a[7][7],p=1,i,j;
  for(i=0;i<7;i++){
      for(j=0;j<7;j++){
          cin >> a[i][j];
      }
  }
  ///scrie pe foaie de examen de aici
  for(i=0;i<7;i++){
      p=p*a[i][i];
  }
  
  for(i=6;i>=0;i--){
      cout<<p<<" ";
      p=p/a[i][i];
  }
  
  //pana aici
}

