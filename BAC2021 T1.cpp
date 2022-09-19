
//SIII ex 1
void divX(int n,int x){
  for(int i=n*x;i>=n;i=i-x){
    cout<<i<<" ";
  }
}

///SIII ex 2
#include <iostream>
using namespace std;
int main() {
  int a[101][101],n,i,j;
  cin>>n;
  for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        cin >> a[i][j];
      }
    }  
///prima coloana j=1
  for(i=1;i<=n-1;i++){
    cout<<a[i][1]<<" ";
  }
 ///ultima linie i=n
for(j=1;j<=n-1;j++){
  cout<<a[n][j]<<" ";
}
  //ultima coloana
  for(i=n;i>=1;i--){
    cout<<a[i][n]<<' ';
  }

  //prima linie
   for(j=n;j>=2;j--){
     cout<<a[1][j]<<" ";
   }


}


///SIII ex 3
int main() {
  ifstream cin("bac.txt");
  int k=0,u,z,x,a[100]={},max1=-1,max2=-2;
  while(cin>>x){
    if(x<=99){
      a[x]++;
    }
    }
  for( x=98;x>=10;x--){
    u=x%10;
    z=x/10;
    if(u!=z && a[x]==0){
      k++;
      if(k==1){
        max1=x;
      }
      if(k==2){
        max2=x;
      }
    }
  }
  if(max2!=-2){
    cout<<max1<<" "<<max2;
  }
  else cout<<"NU EXISTA";
}
