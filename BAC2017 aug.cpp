SII. 4
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    char s[11]={};
    n=0;
    for(int i=1; i<=; i++)
    {
        cin>>s;
        char *p;
        p=strstr(s,"are");
        if(strcmp(p,"are")== 0){
            n++;
        }
    }
    cout<<n;
    return 0;
}

SII ex 5 Paul Roman
#include <iostream>

using namespace std;

int main() {
  float a[51][51] = {}, suma[51] = {};
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      cin >> a[i][j];
      suma[j] = suma[j] + a[i][j];
    }
  }

  for(int i = n; i >= n / 2 + 1; i--) {
    for(int j = 1; j <= n; j++) {
      a[i + 1][j] = a[i][j];
    }
  }

  for(int j = 1; j <= n; j++) {
    a[n / 2 + 1][j] = suma[j] / n;
  }

  for(int i = 1; i <= n + 1; i++) {
    for(int j = 1; j <= n; j++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}

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

/// testare progresie geometrica
#include <iostream>

using namespace std;

int main() {
    int x, vf[1001] = {}, minn1 = 1002, minn2 = 1002, maxx = -1, last;
    int q;
    bool ok = true;
    ///minn1 < minn2
    while(cin >> x) {
        vf[x]++;
        if(x < minn2) {
            if(x > minn1) minn2 = x;
            else {
                minn2 = minn1;
                minn1 = x;
            }
        }
        if(x > maxx) maxx = x;
    }
    q = minn2 / minn1;
    last = minn1;
    for(int i = minn1 + 1; i <= maxx; i++) {
        if(vf[i] != 0) {
            if(i / last != q || (i / last == q && i % last != 0)) {
                ok = false;
            }
            last = i;
        }   
    }
    if(ok == false) {
        cout << "nu este progresie geometrica";
    }
    else {
        cout << q;
    }
}
SIII ex 4
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("bac.in");
    int x,m1=100000,m2=100000,ap[1001]={},r;
    while(f>>x)
    {
        if(x<m1 && ap[x]==0)
        {
            m2=m1;
            m1=x;

        }
        else
            if(x<m2 && ap[x]==0)
            m2=x;
        ap[x]=1;//marcam aparitia lui x
    }
    r=m2-m1;

    while (m2<=1000)
    {
        for(x=m2+1;x<=m2+r-1;x++)
            if(ap[x]==1)
        {
            cout<<"NU";
            return 0;

        }
        if(ap[m2+r]==0){
            cout << "nu";
            return 0;
        }
        m1=m1+r;
        m2=m2+r;

    }
    cout<<r;
    return 0;
}
/*

   X    M1    M2
   M1   M2

   */
    
