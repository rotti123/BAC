
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

SIII ex 4
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
