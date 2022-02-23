SIII ex 1
  #include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

void divizori (int a,int b,int k, int &nr){
  nr=0;
  for(int i=a; i<=b; i++){
    if(i%k==0 && i%10==k){
      nr++;
    }
  }
}
int main() {
  ifstream cin("bac.txt");
  int a, b, k, nr;
  cin>>a>>b>>k;
  divizori(a,b,k,nr);
  cout<<nr;
}
 
 
