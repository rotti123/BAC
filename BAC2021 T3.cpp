

///SIII ex 1
#include <iostream>

using namespace std;


int prim(int n){
   if(n<=1) return 0;
    for(int d=2;d*d<=n;d++){
        if(n%d==0){
            return 0;
        }
    }
    return 1;
}
int suma(int n){
  int s=1;
  for(int i=2;i<=n;i++){
      if(n%i==0 && prim(i)==0){
        s=s+i;
      }
  }
  return s;
}
int main() {
    int a, b;
    cin >> a;
    cout << suma(a);
    return 0;
}
