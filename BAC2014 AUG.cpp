
SII ex 5
#include <iostream>
#include <fstream>
using namespace std;


int main()
{ 
  int a[20][20],n,m,k=2;
  cin>>m>>n;
  for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++){
      if(k%5==0){
          k=k+2;
      }
      a[i][j]=k;
      k=k+2;
      }
  for(int i=1; i<=m; i++,cout<<endl)
    for(int j=1; j<=n; j++)
      cout<<a[i][j]<<" ";
}
SIII ex 3
  #include <iostream>
#include <fstream>
using namespace std;

void triplete(int n){
  for(int x=0;x<=1000;x++){
    for(int y=x+1;y<=1000;y++){
      for(int z=y+1;z<=1000;z++){
        if(x*y + y*z == n){ /// y*(x+z)==n
          cout<<"("<<x<<","<<y<<","<<z<<")"<<'\n';
        }
      }
    }
  }
}

int main()
{ int n;
  cin>>n;
  triplete(n);
}
