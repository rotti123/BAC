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
///SIII ex 3
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
