
SII ex 5
  #include <iostream>
#include <cstring>

using namespace std;

int main(){
  double a[51][51],med[51]={};
  unsigned int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
      med[j]=med[j]+a[i][j];
    }
  }

  for(int i=1;i<=n;i++){
    med[i]=med[i]/n;
  }

  for(int i=n+1;i>=n/2+1;i--){
    for(int j=1;j<=n;j++){
      a[i][j]=a[i-1][j];
    }
  }

  for(int j=1;j<=n;j++){
    a[n/2+1][j]=med[j];
  }

  for(int i=1;i<=n+1;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<'\t';
    }
    cout<<endl;
  }
    return 0;
}

SIII ex 3
  void triplete(int a, int b, int c){
  int ok=0;
  for(int x=a;x<=b;x++){
    for(int y=x;y<=b;y++){
      for(int z=y;z<=b;z++){
        if(x+y+z==c){
          ok=1;
          cout<<"{"<<x<<","<<y<<","<<z<<"} ";
        }
      }
    }
  }
  if(ok==0){
    cout<<"nu exista";
  }
}

