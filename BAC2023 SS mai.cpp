SII. 3
  #include <iostream>
#include <string.h>
using namespace std;

int main() {
    char s[21];
    cin.getline(s,21);
    for(int k = strlen(s) - 1; k >= 0; k --){
        if(s[0] == s[k]){
            int i = 0;
            while(i <= k){
                cout << s[i];
                i ++;
            }
            cout << " ";
        }
    }
    return 0;
}
SIII.1
  #include <iostream>
#include <string.h>
using namespace std;

void Putere(int n, int &x, int &p){
  for(int i=2; i<=n; i++){
    int a=n;
    p=0;
    while(a%i==0){
      a=a/i;
      p++;
    }
    if(a==1){
      x=i;
      break;
    }
  }
}


///var Andrei (－_－) zzZ
void putere(int n, int &x, int &p){
    int val;
    for(x=2; x<=1000; x++){
        val=1;
        for(p=2; p<=1000; p++){
            val=x*val; ///val=x^p
            if(val==n) return;
            else if(val>n) break;
        }
    }
}

int main() {
    int n, x, p;
  n=216;
      Putere(n,x,p);
  cout<<x<<" "<<p;
    return 0;
}
SIII.2
  #include <iostream>
using namespace std;

int main() {
  int n, a[21][21] = {};
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[1][i];
  }
  ///Var I
      for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>n+1){
                a[i][j]=-1;
            }
            else{
                a[i][j]=(a[i-1][j]+a[i-1][j+1])%100;
            }
        }
    }
  /*Var II
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= n-i+1; j++) {   ///i+j==n+1 pe diag sec, j=n-i+1
      a[i][j]=(a[i-1][j]+a[i-1][j+1])%100;
    }
    for(int j=n-i+2;j<+n;j++){
      a[i][j]=-1;
    }
  }
  */
  for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}

SIII.3
  #include <iostream>
using namespace std;
///Alexia
int main() {
  int a,pmin=0,p=1,pmax=0,st=0,dr=0,aux,n;
  /// [x,y]= p-interval curent
  cin>>a;
  x=a;
  y=a;
  while(cin>>a){
    p++;
    if(a<x){
       x=a;
    }
    else if(y<a){
      y=a;
    }
    else{
      if(pmin==0){
         pmin=p;   
      }
      pmax=p;
    }
    
  }
  if(pmin!=0){
    cout<<pmin<<" "<<pmax;
  }
  else{
    cout<<"nu exista";
  }
  return 0;
}

///Dania
int a, b, c, pmin=0, pmax, aux, p;
cin>>a>>b;
p=2;
if(a>b){
  aux=a;
  a=b;
  b=aux;
}
while(cin>>c){
  p++;
  if(a<=c && c<=b){
    if(pmin==0){
      pmin=p;
      pmax=p;
    }
      pmax=p;
  }
  else{
    if(a>c){
      a=c;
    }
    else if(b<c){
      b=c;
    }
  }
}

