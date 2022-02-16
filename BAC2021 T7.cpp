///SIII ex 1
#include <iostream>

using namespace std;
void afisare (int x, int y, int k)
{
    int cntr=0;
    for (int i=x; i<=y; i++)
    {
        cout<<i<<' ';
        cntr=cntr+1;
        if (cntr%k==0)
        {
            cout<<"* ";
        }
    }
    if (cntr%k!=0)
    {
        cout<<"*";
    }
}
int main() {
    int x,y,k;
    cin>>x>>y>>k;
    afisare (x,y,k);
    
    
    
    return 0;
}

///SIII ex 2
#include <iostream>
using namespace std;
int main() {
  int x, aux=0, n=0,a[11][11]={};
  cin>>x;
  aux=x;
  while(aux!=0){
    n++;
    aux=aux/10;
  }
  for(int j=n; j>=1; j--){
    for(int i=n; i>=1; i--){
      a[i][j]=x%10;
    }
    x=x/10;
  }
  for(int i=1; i<=n; i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}


///  ¯\_(ツ)_/¯
