SIII. 1
  /// n=70613
///nrc=5
/// p =10^(nrc/2)
/// a=n/p =706
/// b=n%p =13
/// n = (a*10+(a%10))*p+b


SIII. 3
  
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{                              
  int n,m,v[100],x,cnt=0, i,ant=-1;
  fstream f("numere.in",ios::in);
  f>>n;
  for (int i=1;i<=n;i++)
    {
      f>>x;
      v[i]=x;
    }
  f>>m;
 i=1;
  while(i<=n && f>>x){
    while (v[i]<x)
    {
      if (v[i]%3==0){
        if (v[i]!=ant)
        {
          cout<<v[i]<<" ";
        }
        ant=v[i];
        cnt++;
      }
      i++;
    }
    if (v[i]>x)
    {
      if(x%3==0)
      {
        if (x!=ant)
        {
          cout<<x<<" ";
        }
        ant=x;
        cnt++;
      }
    }
    if (v[i]==x)
    {
      if (x!=ant)
        cout<<x<<" ";
      ant=x;
      i++;
    }
  }
  if (i>n)
  {
    while(f>>x)
      {
        if (x!=ant){
          if (x%3==0){
            cout<<x<<" ";
              ant=x;
            cnt++;
          }
        }
      }
  }
  else
  {
    for (int j=i;j<=n;j++)
      {
        if (v[j]%3==0)
          if (v[j]!=ant)
          {    cout<<v[j]<<" ";
              ant=v[j];
               cnt++;
          }
      }
  }
if (cnt==0)
  cout<<"nu exista";
}
