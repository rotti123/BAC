///SIII ex 1

#include <iostream>
#include <fstream>
using namespace std;

int suma(int a,int b)
{
  int d,s=0,r,a1,b1;
  a1=a;
  b1=b;
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  for(d=1;d<=a;d++)
  {
    if(a%d==0)
    {
      s+=d;
    }
  }
}

}
int main() {
  ifstream cin("test.in");
  int a,b;
  cin>>a>>b;
  cout<<suma(a,b);
 
}
