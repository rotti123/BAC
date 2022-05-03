
SI ex 2 c)
citeşte n 
 (număr natural nenul)
i<-1
┌cat timp i<=n execută
│┌pentru j1,n execută
││┌dacă i=j sau i+j=n+1 atunci 
│││ scrie ’#’ 
│││altfel 
│││ scrie j 
││└■
│└
|i<-i+1
└■

SII ex 3
cout<<x.nume[0]<<endl<<(x.media1+x.media2)/2;



SII ex 5
  for(int i=1;i<=n;i++){
	a[i][1]=a[n][m];
	a[i][m]=a[n][m];
}
for(j=1;j<=m;j++){
	a[1][j]=a[n][m];
	a[n][j]=a[n][m];
}

SIII ex 2
  f(1,1000)=f(5,200)=f(25,40)

SIII ex 3
void duplicare(int &n){
    int nr=0, p=1, c;
    while(n>0){
      c=n%10;
      n=n/10;
      if(c%2==0){
        nr=nr+p*c/2;
        p*=10;

      }
      nr=nr+p*c;
      p*=10;
    }
    n=nr;

  }

SIII ex 4
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int x,lungMax=0,lung=0,cnt=0;
  ifstream cin("bac.txt");
  while(cin>>x){
    if(x%2==0){
      lung++;
    }else{
      if(lung>lungMax){
        lungMax=lung;
        cnt=1;
      }else if(lung == lungMax){
        cnt++;
      }
      lung=0;
    }
  }
  ///tratez ultima secv
  if(lung>lungMax){
        lungMax=lung;
        cnt=1;
      }else if(lung == lungMax){
        cnt++;
      }
  cout<<cnt;
}
