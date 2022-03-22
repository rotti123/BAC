
///SIII ex 1
int factori(int n,int m){
  int d=2,k=0,p1,p2;
  while(n>1 && m>1){
    p1=0;
    p2=0;
    while(n%d==0){
      n=n/d;
      p1++;
    }
    while(m%d==0){
      m=m/d;
      p2++;
    }
    if(p1==p2 && p1!=0){
      k++;
    }
     d++; 
  }
  return k;
}
///SIII ex 2
int main() {
  ifstream cin("bac.txt");
  int n,a[21][21];
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i+j<=n+1){
        a[i][j]=i+j-1;
      }
      else a[i][j]=2*n+1-(i+j);
      cout<<a[i][j]<<" ";
      }
    cout<<endl;
  }
  //cin>>n>>m;
 // cout<<factori(n,m);
}
