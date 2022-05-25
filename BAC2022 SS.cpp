SIII ex 1
  void patrate(int n, int &x, int &y){
  for (x=2; x*x<n; x++){
    for (y=x+1; y*y<n; y++){
      if (x*x*y*y==n)
        return; //iesire fortata din fct void
    }
  }
  x=0; y=0;
}

SIII ex 2
int main() {
  int a[101][101],n,i,j;
  cin>>n;
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      {
        cin>>a[i][j];
      }
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      {
        if(i<j)
          a[i][j-1]=a[i][j];
      }
  for(i=1;i<=n;i++){
    for(j=1;j<n;j++)
      {
        cout<<a[i][j]<<" ";
        
      }
      cout<<endl;
    }
    return 0;
}

SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("bac.txt");
    int x,y,c1,lung=0,lmax=0,ok=0,k,primul=1;

    while(cin>>x)
    {
        if(primul==1)
            k=1;
        else{
            if(x==y){
                k=2;
            }
            else{
                k=1;
            }
            primul=1;
        }
        ok=1;
        while(k<x && cin>>y)  ///testez daca urm x-1 valori sunt egale cu x
        {
            k++;
            if(x!=y)
            {
                ok=0;
                primul=0;
                break;
            }
        }
        if(ok==1)
        {
            lung = lung +x; ///adaug la lung secv progresive val x
            if(lung>lmax){
                lmax=lung;
               // cout<<lmax<<" "<<x<<endl;
            }
        }
        else lung=0;
    }
    cout<<lmax;
    return 0;
}
