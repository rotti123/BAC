┌pentru i<-n%k,1,-1 execută 
│ scrie 3*t,' ' 
└■

i<-n%k
cat timp i>=1 executa 
   scrie 3*t,' ' 
   i<-i-1
sf cat timp

L=[2,4,5,6]
C=[1 2 6 3 5 6 1]

1 2
1 6
2 4
2 6
3 5
3 6
4 5
5 6

if(strchr("OAU",s[i])!=NULL)    cout<<"*";
else		  
   cout<<s[i];

//##################################
SIII ex1

#include <iostream>

using namespace std;

void frate(int x,int &y)
{   y=0;
    int p=1,c;
    while(x!=0){
        c=x%10;
        if(c==9){
            y=-1;
            return;
        }
        x/=10;
        y=y+(c+1)*p;
        p*=10;
    }
}

int main() {
    int x,y;
    cin >> x;
    frate(x,y);
    cout<< y;
    return 0;
}
