#include <iostream>

using namespace std;
int main()
{
  unsigned int n,m,a[101][101],mini[101]={};
  cin>>m>>n;
  for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    cin>>a[i][j];
    for(int i=2;i<=m;i+=2)
    {
        mini[i]=a[i][1];
        for(int j=1;j<=n;j++)
            if(a[i][j]<mini[i])
            mini[i]=a[i][j];
    }
    for(int i=1;i<=m;i+=2)
    {
        for(int j=1;j<=n;j++)
            a[i][j]=min(a[i][j],mini[i+1]-1);
    }
  for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

