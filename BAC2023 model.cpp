II.2
  #include <iostream>
#include <cstring>
using namespace std;

struct echipa
{ char nume[50];
 int rezultat;
};
struct echipa c[3];

int main() 
{
  echipa aux;
  strcpy(c[0].nume,"Vatican");
  strcpy(c[1].nume,"Anglia");
  strcpy(c[2].nume,"Romania");
  c[0].rezultat=1;
  c[1].rezultat=2;
  c[2].rezultat=10;
  for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
      if(c[i].rezultat<c[j].rezultat){
        aux=c[i];
        c[i]=c[j];
        c[j]=aux;
      }
    }
  }
  for(int i=0;i<3;i++){
    cout<<c[i].nume<<" ";
  }
  return 0;
}

II.3
  plantau fistic
01234567890123
s1+7 =" fistic"

p=s1+7 -s1 =7 [p]
s1+p+1=s1+8="fistic"
s2=s1+8="fistic"  [s2]
         012345
s2+2="stic"
"u fistic" <- "stic"
s1+p-1=s1+6 <- "stic"

plantastic [s1]
0123456789
s1="plantastic"
s2+1="istic" <-"antastic"
s1+2 = "antastic"
s2=fantastic

7fantastic


III.1
  #include <iostream>

using namespace std;
int DoiTrei(int n){
    if(n==0){
      return 0;
    }
    while(n!=0){
        if(n%10!=2 && n%10!=3){
            return 0;
        }
      n=n/10;
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    cout<<DoiTrei(n);
    return 0;
}

III.2
#include <iostream>
using namespace std;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int inside(int x,int y,int n){
  return (1<=x && x<=n && 1<=y && y<=n);
}
{
}
int main() {
    int n,a[105][105]={},x,y,sol=0;
    cin>>n;
//memset(a,1,sizeof(a));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  for(int j=0;j<=n+1;j++){
    a[0][j]=4;
    a[n+1][j]=4;
    a[j][0]=4;
    a[j][n+1]=4;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(a[i][j]==3){
        int ok=1;
        for(int k=0;k<4;k++){
          x=i+dx[k];
          y=j+dy[k];
          if(inside(x,y,n) && a[x][y]==0) ok=0;
        }
        if(ok==1) cout<<i<<" ",sol=1;
        }
    }
  }
  if(sol==0) cout<<"nu exista";
    return 0;
}


