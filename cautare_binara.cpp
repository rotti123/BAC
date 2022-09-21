#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int a[100],st,dr,x,m,sol=-1,n;
  cin>>n>>x;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  st=1;
  dr=n;
  while(st<=dr)
    {    
      m=(st+dr)/2;
      if(x<a[m])
      {
        dr=m-1;
      }
      else
      if(x>a[m])
      {
        st=m+1;
      }
      else
      if(a[m]==x){
        sol=m;
        break;
        }
    }
  cout<<sol;
    return 0;
}
