///SII ex 3

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
  char s[21];
  int p=0;
  cin.getline(s,21);
  if(s[0]=='A'){
    if(s[1]!='I')
        cout<<s[0];
  }
  p++;
  while(s[p]!=NULL)
    {
      if(s[p]=='A')
      {
        if(!(s[p-1]=='I' || s[p+1]=='I'))
        {
          cout<<"A";
        }

      }
      else
      {
        cout<<s[p];
      }
      p++;
    }
}


///SIII ex 1:
#include <iostream>

using namespace std;

int factori(int n, int m){
    int c=0;
    for(int d=2;d<=n;d++){
        if(n%d==0 && m%d==0){
            c++;
            while(n%d==0){
                n=n/d;
            }
            while(m%d==0){
                m=m/d;
            }
        }else{
            while(n%d==0){
                n=n/d;
            }
            while(m%d==0){
                m=m/d;
            }
        }
    }
    return c;
}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<factori(n,m);
}

///SIII ex2
#include <iostream>

using namespace std;

int main() {
    int n,a[21][21];
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=abs(n-(i+j)+1);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<' ';
        }cout<<endl;
    }
}

///SIII ex3
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.in");
    int x,nr=0,p1=0,p2=0;
    while(cin>>x){
        nr++;
        if(x<0){
            if(p1==0){
                p1=nr;
            }
            p2=nr;
        }
    }
    if(nr-p1+1>p2){
        cout<<nr-p1+1;
    }
    else cout<<p2;
    return 0;
}

https://pastebin.com/DqzmX88h
