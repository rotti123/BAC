///SIII ex 1

#include <iostream>
using namespace std;
int putere(int n)
{
  int d=2,p, pmin=1000000, dmin;
  while(n>1)
    {
      p=0;
      while(n%d==0)
        {
          p++;
          n=n/d;
        }
      if(pmin>=p && p!=0)
      {
        pmin=p;
        dmin=d;
      }
      d++;
    }
  return dmin;
}
int main() {

int n;
cin>>n;
cout<<putere(n);
}


///SIII ex 2
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
//  ifstream cin("puteri6.in");
//  ofstream cout("puteri6.out");
  int n,a[21][21],k,aux;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  cin>>k;
  aux = a[k][k-1];
  for(int j = k - 1; j > 1; j --){ ///permutare circulara spre dreapta
      a[k][j] = a[k][j - 1];
  }
  a[k][1] = aux;
  for(int i = 1; i <= n; i ++){
    for(int j = 1; j <= n; j ++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}


///SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream cin("bac.in");
  ofstream cout("bac.out");
    int a[11]={},x,elem=0,sum=0;
    while(cin>>x)
    {
      if(a[x]==0) elem++;
      a[x]++;
    }
   for(int i=1;i<=10;i++)
   {
     sum+=a[i]*i*i;
   }
   sum+=elem*10;
   cout<<sum;
}
