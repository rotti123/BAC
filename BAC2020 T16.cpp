///SIII ex1
#include <iostream>

using namespace std;
int nrdivprim(int n){
    int d=2,p,cnt=0;
    while(n!=1)
    {
        p=0;
        while(n % d==0){
            p++;
                n=n/d;
        }
        if(p%2==1)
        cnt++;
        d++;
    }
    return cnt;
}
int main() {
int n;
cin>>n;
cout<<nrdivprim(n);
    return 0;
}

///SIII ex2
#include <iostream>

using namespace std;

int main() {
    int a[100][100]={},m,n,k=1;
    cin >> n >> m;
    for(int i=n;i>=1;i--){
        for(int j=m;j>=1;j--){
            a[i][j]=k*k;
            k+=2;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
///SIII ex 3 brand new
#include <iostream>
#include <fstream>
using namespace std;
int a[1000001], b[1000001], c[2000002];
int main() {
 // ifstream cin("bac.txt");
  int i, j, n, m;
  cin >> n >> m;
  for(i = 1 ; i <= n; i++){
    cin >> a[i];
  }
  for(i = 1; i <= m; i ++){
    cin >> b[i];
  }
  i = 1;
  j = 1;
  int k = 1;
  int par = -1;
  ///aleg primul elem din sirul solutie
  if(a[1] < b[1]){
    c[1] = a[1];
    par = a[1] % 2;
    i++;
  }
  else{
    c[1] = b[1];
    par = b[1] % 2;
    j++;
  }
  while(i <= n && j <= m){
    if(a[i] <= b[j] && a[i] % 2 != par){
      k ++;
      c[k] = a[i];
      par = a[i] % 2;
      i ++;
    }
    else if(b[j] <= a[i] && b[j] % 2 != par){
      k ++;
      c[k] = b[j];
      par = b[j] % 2;
      j ++;
    }
    else {
      if(a[i] < b[j]) i ++;
      else j ++;
    }
  }
  if(i <= n){
    for(int poz = i; poz <= n; poz ++){
      if(a[poz] % 2 != par){
        k ++;
        c[k] = a[poz];
        par = a[poz] % 2;
      }
    }
  }
  else if(j <= m){
    for(int poz = j; poz <=m; poz ++){
      if(b[poz] % 2 != par){
        k ++;
        c[k] = b[poz];
        par = b[poz] % 2;
      }
    }
  }
  for(int poz = 1; poz <= k; poz ++){
    cout << c[poz] << " ";
  }

}

///SIII ex 3 creepy
#include <iostream>
#define nmax 1000005
using namespace std;

int a[nmax]={},b[nmax]={},c[2*nmax]={};

int main() {
  int m,n,i,j,k;
  cin>>m>>n;
  for(i=1;i<=m;i++){
      cin>>a[i];
      }
      for(i=1;i<=n;i++){
          cin>>b[i];
      }
      i=1;
      j=1;
      k=1;
      if(a[i]<b[j]){
         c[k]=a[i];
         i++;
      }
      else{
          c[k]=b[j];
          j++;
      }
      while(i<=m && j<=n){
          while(i<=m && a[i]==c[k]){
              i++;
          }
          while(j<=n && b[j]==c[k]){
              j++;
          }
          if(i>m || j>n){
              break;
          }
          if(a[i]<b[j]){
              if(a[i]%2!=c[k]%2){
              k++;
              c[k]=a[i];
              }
              i++;
          }
          else if(a[i]>b[j]){
              if(b[j]%2!=c[k]%2){
              k++;
              c[k]=b[j];
              }
              j++;
          }
          else if(a[i]==b[j]){
              if(a[i]%2!=c[k]%2){
              k++;
              c[k]=a[i];
              }
              i++;
              j++;
          }
      }
      cout<<a[i]<<endl;
    if(j>n){// nu mai am elemente in b de prelucrat
       for(int poz=i;poz<=m;poz++){
           if(a[poz]!=c[k]){
               if(a[poz]%2!=c[k]%2){
               k++;
               c[k]=a[poz];
               }
           }
       } 
    } 
    if(i>m){
        for(int poz=j;poz<=n;poz++){
            if(b[poz]!=c[k]){
                if(b[poz]%2!=c[k]%2){
                k++;
                c[k]=b[poz];
                }
            }
        }
    }
    for(i=1;i<=k;i++){
        cout<<c[i]<<" ";
    }
}
