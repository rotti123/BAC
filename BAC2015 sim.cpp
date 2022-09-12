II. 5
  #include <iostream>
using namespace std;
int main() {
  int a[51][51],m, n;
  cin>>m>>n;
  for(int i=1;i<=m;i++){
    a[i][1]=2*i-1;
    for(int j=2;j<=n;j++){
    a[i][j]=a[i][j-1]+1;
    }
      
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
    
}

III.3
  
  #include <iostream>
using namespace std;
int main() {
  int n,a[10]={},c;
  cin>>n;
while(n!=0){
  c=n%10;
  n=n/10;
  a[c]++;
}  
  for(int i=0;i<=9;i++){
    if(a[i]>0){
      cout<<i<<" ";
    }
  }
    
}
