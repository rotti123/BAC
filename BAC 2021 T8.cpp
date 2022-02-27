SI

1 c
2 c
3 b
4 c
5 d

SII.
 
1. a) 440
   b) 6,7
   c)
  
  #include <iostream>
  using namespace std;
  int main(){
    int x,n;
    cin >> n;
    x=0;
    for(int i=1;i<=n;i++){
      if(i%2==0) x=x+i*i;
      else       x=x+(i+1)*(i+1);
    }
    cout<<x;
     return 0; 
    }

    d)
citește n (număr natural)
x <- 0
i <- 1      
┌cat timp i<=n execută
│ ┌dacă i%2=0 atunci
│ │ x <- x+i*i
│ │altfel
│ │ x <- x+(i+1)*(i+1)
│ └■
  i <- i+1
└■
scrie x

2)
  strcut clasa{
   float sem1,sem2;
   int elev[40], numar;
   }p;

3)
7volt
  
 SIII
 1)
  void nrfp(int n, int &m){
    int d,k=0,e,nr,kmax=-1;
    m=-1;
    for(int i=2;i<=n;i++){
        k=0;
        d=2;
        nr=i;
        while(nr!=1){
            e=0;
            while(nr%d==0){
                nr=nr/d;
                e++;
            }
            if(e>0) k++;
            d++;
        }
        if(k>=kmax){
            m=i;
            kmax=k;
        }
    }
}

2)
  
#include <iostream>

using namespace std;

int main() {
    int a[51][51]={},n,s1=0,s=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(i<j && i+j >n+1){
                s=s+a[i][j];
            }
        }
    }
    
    for(int i=2;i<n;i++){
        s1=s1+a[i][n];
    }
    s=s-s1;
    cout<<s;
    return 0;
}
  
