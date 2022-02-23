#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
/*
Avem un sir cu n (n<=20), de numere naturale.
Sa se insereze in fata fiecarei valori pare jumatate din val ei.
Ex:
n=7
11 22 33 44 55 66 77

Rezolvare:
11 11 22 33 22 44 55 33 66 77
  */
int main() {
  ifstream cin("bac.txt");
  int n, a[41]={},k=0,j,i;
  cin >> n;
  for(i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]%2==0){
      k++;
    }
  }
  j=n+k;
  for(i=n;i>=1;i--){
    if(a[i]%2==0){
      a[j]=a[i];
      j--;
      a[j]=a[i]/2;
      j--;
    }
    else{
      a[j]=a[i];
      j--;
    }
  }
  n=n+k;
  for(i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
 
