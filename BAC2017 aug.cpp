
SII ex 5
  #include <iostream>
#include <cstring>

using namespace std;

int main(){
  double a[51][51],med[51]={};
  unsigned int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
      med[j]=med[j]+a[i][j];
    }
  }

  for(int i=1;i<=n;i++){
    med[i]=med[i]/n;
  }

  for(int i=n+1;i>=n/2+1;i--){
    for(int j=1;j<=n;j++){
      a[i][j]=a[i-1][j];
    }
  }

  for(int j=1;j<=n;j++){
    a[n/2+1][j]=med[j];
  }

  for(int i=1;i<=n+1;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<'\t';
    }
    cout<<endl;
  }
    return 0;
}

SIII ex 3
  void triplete(int a, int b, int c){
  int ok=0;
  for(int x=a;x<=b;x++){
    for(int y=x;y<=b;y++){
      for(int z=y;z<=b;z++){
        if(x+y+z==c){
          ok=1;
          cout<<"{"<<x<<","<<y<<","<<z<<"} ";
        }
      }
    }
  }
  if(ok==0){
    cout<<"nu exista";
  }
}

SIII ex 4
  
  #include <iostream>
#include <fstream>
typedef unsigned int uint;
using namespace std;

int main(){
  ifstream cin("bac.txt");
  uint x, nr1 = 0, nr2 = 0, r,ok=1;
  int v[1001] = {};
  while (cin >> x){
    v[x]++;
  }
  for (int i = 0; i<= 1000; i++){
    if (v[i] != 0 && nr1 == 0){
      nr1 = i;
    }
    else if (v[i] != 0){
      nr2 = i;
      break;
    }
  }
  r = nr2 - nr1;
  for (int i = nr2 + 1; i <= 1000; i++){
    if (v[i] != 0){
      if (i - nr2 != r){
        ok = 0;
        break;
      }
      else{
        nr2 = i;
      }
    }
  }
  if (ok == 1){
    cout << r;
  }
  else cout << "Nu exista";
  return 0;
}


SIII ex 4 VAR II cu explicatii
#include <fstream>
#include <iostream>
using namespace std;
/*
Caz I prioritate 1
     x  m1 m2
     m1 m2
   m2=m1;
   m1=x;

Caz II prioritate 2
    m1  x  m2
        m2
    m2=x;

30 80 130 180 230 280 331
m1 m2
   a  b
      a   b
  */

int main(){
  ifstream cin("bac.in");
 int v[1001]={},min1=1001,min2=1001,max=-1,r,i,x,a,b,ok=1;
  while(cin>>x)
    {
      v[x]=1;
      if(x<=min1)
      {
        min2=min1;
        min1=x;
      }
      else if(x<min2)
      {
        min2=x;
      }    
      if(x>max)
        max=x;
    }
  r=min2-min1;
  a=min2;
  for(b=a+1;b<=max;b++)
    {
      if(v[b]==1)
      {
        if(r!=b-a){
          ok=0;
          break;
          }
        a=b;
      }
    }
  if(!ok)
    cout<<"nu";
  else
    cout<<r;
}
