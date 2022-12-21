///BAC2021 SII ex 3
#include <cstring>
#include <iostream>
using namespace std;
char s[21], v1[6]="aeiou", v2[6]="AEIOU", s2[11];
char a[100];
int main()
{
  cin.getline(s, 21);
    for(int j=0; j<6; j++)
      {
        if(strchr(s, v1[j])==NULL){
                a[0]=v1[j];
          strcat(s2, a);
        }
        if(strchr(s, v2[j])==NULL){
                a[0]=v2[j];
          strcat(s2, a);
        }
      }
  cout<<s2;
    return 0;
}

///SIII ex 1
int factori(int n,int m){
  int d=2,k=0,p1,p2;
  while(n>1 && m>1){
    p1=0;
    p2=0;
    while(n%d==0){
      n=n/d;
      p1++;
    }
    while(m%d==0){
      m=m/d;
      p2++;
    }
    if(p1==p2 && p1!=0){
      k++;
    }
     d++; 
  }
  return k;
}
///SIII ex 2
int main() {
  ifstream cin("bac.txt");
  int n,a[21][21];
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i+j<=n+1){
        a[i][j]=i+j-1;
      }
      else a[i][j]=2*n+1-(i+j);
      cout<<a[i][j]<<" ";
      }
    cout<<endl;
  }
  //cin>>n>>m;
 // cout<<factori(n,m);
}

///SIII ex 3

#include <iostream>
#include <fstream>
using namespace std;
//ifstream f("bac1.txt");
//ifstream g("bac2.txt");

int factori(int n,int m){
  int d=2,k=0,p1,p2;
  while(n>1 && m>1){
    p1=0;
    p2=0;
    while(n%d==0){
      n=n/d;
      p1++;
    }
    while(m%d==0){
      m=m/d;
      p2++;
    }
    if(p1==p2 && p1!=0){
      k++;
    }
     d++; 
  }
  return k;
}

int main() {
  ifstream cin("bac.txt");
  int x,p1=-1,p2=-1,k=0;
  while(cin>>x){
    k++;
    if(x>0){
      if(p1==-1){
        p1=k;
      }
      p2=k;
    }
  }
  if(p2>k-p1+1){
    cout<<p2;
  }
  else cout<<k-p1+1;
}
