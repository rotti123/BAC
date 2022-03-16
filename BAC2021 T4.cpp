
///SIII ex 1
#include <iostream>
#include <fstream>
using namespace std;

int joc(int n){
  int k=0;
  for(int i=1;i<=n/2;i++){
    if(n%i==0) k++;
  }
  return k;
}

int main() {
  ifstream cin("bac.txt");
  int n=12;
  cout<<joc(n);
}
