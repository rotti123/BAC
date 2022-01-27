
SII ex1 c)
  #include <iostream>
using namespace std;

int main() {
    int n,m=0,x;
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>x;
            while(x%10 > (x/10)%10){
                    x=x/10;
            }
            m=m+x;
    }
    if(m>0){
            cout<<m;
    }
    else{
            cout<<"niciunul";
    }
    return 0;
}

SII ex 3
#include <iostream>
using namespace std;
int main() {
  char A[10][10];
  int n,i,j;

  for(i=0;i<7;i++)
    for(j=0;j<7;j++){
     A[i][j]='*';
    }
     for(i=0;i<7;i++){

      for(j=0;j<7;j++){
        if(i>j){
          A[i][j]='+';
        }
        else{
          
        }
        cout<<A[i][j]<<" ";
      }
       cout<<endl;
     }
}
