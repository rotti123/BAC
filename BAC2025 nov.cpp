SIII
#include <iostream>

using namespace std;



//ifstream cin("bac.in");
//ofstream cout("bac.out");

void pao(int x, int y , int &rez){
    int newx=0, ogly=0,p=1;
    while(x > 0){
        int c=x%10;
            if(c%2 == 0 && c!=0){
            newx= newx + c*p ;
            p*=10;
        }
        x/=10;
    }

    while(y > 0){
        int c= y%10;
        if(c % 2 == 0 && c!=0){
            ogly = ogly * 10 +c;
        }
        y/=10;
    }

    if(newx == ogly){
        rez=1;
    }
    else
        rez=0;
}

int main() {
    int n=0,k=0,A[101][101];
    cin>> k >> n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1&&j==1){
            A[i][j]=k;
        }
        else if(j==1){
            A[i][1]=A[i-1][1]+k+1;
        }
        else A[i][j]=A[i][j-1]-1;
    }
   }
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<< A[i][j] <<" ";

   }
   cout<<endl;
   }

}
