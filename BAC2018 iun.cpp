
SIII ex 3
#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
  ifstream cin("test.in");
  ofstream cout("test.out");
  int v[10],x,a,b,c,lmax=0,lung=2;
  cin>>a>>b;
  while(cin>>c){
    if(c!=b&&c!=a&&a!=b)
    {
      lung++;
    }
    else
    {
      if(lung>lmax) lmax=lung;
      lung=2;
    }
    a=b;
    b=c;
  }
  if(lung>lmax) lmax=lung;
  cout<<lmax;
}
