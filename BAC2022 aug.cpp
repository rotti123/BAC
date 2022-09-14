II.3
   #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct meteo 
{ int an, temperatura; 
}x;
/*
<10 RACOROS
>=10 && <=11 NORMAL
>11 CALDUROS
  */
int main() {
if(x.temperatura > 11) cout << "CALDUROS";
else if(x.temperatura < 10) cout << "RACOROS";
else cout << "NORMAL";
 
  return 0;
}

III.1
   void schimb_cata(int &n, int x, int p){
  int e=1,st,dr;
  for(int i=1; i<=p; i++){
    e=e*10;
  }
  dr=n%e;
  st=n/e;
  n=(st/10*10+x)*e+dr;
}
