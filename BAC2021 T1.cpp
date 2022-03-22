
//SIII ex 1
void divX(int n,int x){
  for(int i=n*x;i>=n;i=i-x){
    cout<<i<<" ";
  }
}

///SIII ex 2
int main() {
  int n,a[50][50];
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  for(int i=1;i<=n;i++){
    cout<<a[i][1]<<" ";
  }
  for(int j=2;j<=n;j++){
    cout<<a[n][j]<<" ";
  }
  for(int i=n-1;i>=1;i--){
    cout<<a[i][n]<<" ";
  }
  for(int j=n-1;j>=2;j--){
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
