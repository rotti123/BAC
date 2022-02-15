┌pentru i<-n%k,1,-1 execută 
│ scrie 3*t,' ' 
└■

i<-n%k
cat timp i>=1 executa 
   scrie 3*t,' ' 
   i<-i-1
sf cat timp

L=[2,4,5,6]
C=[1 2 6 3 5 6 1]

1 2
1 6
2 4
2 6
3 5
3 6
4 5
5 6

if(strchr("OAU",s[i])!=NULL)    cout<<"*";
else		  
   cout<<s[i];

//##################################
SIII ex1

#include <iostream>

using namespace std;

void frate(int x,int &y)
{   y=0;
    int p=1,c;
    while(x!=0){
        c=x%10;
        if(c==9){
            y=-1;
            return;
        }
        x/=10;
        y=y+(c+1)*p;
        p*=10;
    }
}

int main() {
    int x,y;
    cin >> x;
    frate(x,y);
    cout<< y;
    return 0;
}
SIII ex 2
   
   #include <fstream>
#include <iostream>
using namespace std;

void citire(int &n,int &k,int a[][21])
{
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
}

void circularDiagSec(int n,int k,int a[][21])
{ int c=a[k][n-k];
  for(int j=n-k;j>1;j--){ ///k+j<n+1 <=> j<n-k+1
      a[k][j]=a[k][j-1];
  }
  a[k][1]=c;
}

void afisare(int n,int a[][21])
{
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<'\n';
  }
}

int main() { 
  int n,a[21][21]={},k;
  ifstream cin("bac.txt");
 // citire(n,k,a);
   cin>>n>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }

  
  circularDiagSec(n,k,a);
  afisare(n,a);
  return 0;
}
/*
5 2
2 3 4 5 6
2 4 6 8 0
7 8 9 0 1
3 5 7 9 1
7 3 8 5 6
*/

//SIII ex 3

#include <fstream>
#include <iostream>
using namespace std;

int main() { 
  ifstream cin("bac.txt");
  int x,y,nr=1;
  cin>>x;
  while(cin>>y){
    if(y>=x){
      nr++;
    }
  }
  cout<<nr;
  return 0;
}

