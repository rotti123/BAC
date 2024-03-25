II. 5
  #include <iostream>
using namespace std;
int main() {
  int a[51][51],m, n;
  cin>>m>>n;
  for(int i=1;i<=m;i++){
    a[i][1]=2*i-1;
    for(int j=2;j<=n;j++){
    a[i][j]=a[i][j-1]+1;
    }
      
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
    
}

III.3
  
  #include <iostream>
using namespace std;
int main() {
  int n,a[10]={},c;
  cin>>n;
while(n!=0){
  c=n%10;
  n=n/10;
  a[c]++;
}  
  for(int i=0;i<=9;i++){
    if(a[i]>0){
      cout<<i<<" ";
    }
  }
    
}

III.4

  BAC 2015 sim
VAR I - vector de aparitii

#include <iostream>
#include <fstream>
#include <cstring>
using  namespace std;
ifstream f("bac.in");
int main()
{
  int ap[10001]={},n,x,y,z,ok=0;
  f>>n;
  for(int i=1;i<=n;i++)
  {
      f>>z;
      ap[z]++;
  }
  f>>x>>y;
  for(int i=y;i>=x;i--)
  {
      if(ap[i]!=0)
      {
          ok=1;
          cout<<i;
          break;
      }
  }
  if(ok==0) cout<<"nu exista";
    return 0;
}

VAR II - cautare binara

#include <iostream>
#include <fstream>
#include <cstring>
using  namespace std;
ifstream f("bac.txt");
int cb (int a[],int st ,int dr ,int x,int y)
{
    int poz=0;
    while(st<=dr)
    {
        int mij=(st+dr)/2;
        if(x<=a[mij] && a[mij]<= y)
        {
            poz=mij;
            dr=mij-1;
        }
        if(a[mij]>y)
        {
            st=mij+1;
        }
        if(a[mij]<x)
        {
            dr=mij-1;
        }

    }
    return poz;
}
int main()
{
  int a[10001]={},n,x,y,z,ok=0;
  f>>n;
  for(int i=1;i<=n;i++)
  {
      f>>a[i];
  }
  f>>x>>y;
  ok=cb(a,1,n,x,y);
  if(ok==0) cout<<"nu exista";
  else
  {
      cout<<a[ok]<<" ";
  }
    return 0;
}


