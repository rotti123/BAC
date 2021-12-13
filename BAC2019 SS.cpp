

II 1.
citeşte n,k
(numere naturale, k număr prim)
 p<-0;
┌pentru i<-1,n execută
│ x<-i
│┌cât timp x%k=0 execută
││ x<-[x/k]; p<-p+1
│└■
└■
scrie p

II. 2
((d.zi < e.dev.zi && d.luna == e.dev.luna) || d.luna < e.dev.luna)

II.3 a[i][j]=max(5-i,5-j);

III.1
#include <iostream>
#include <fstream>

using namespace std;

int Egal(int n){
    int c,k=-1;
    while(n>0){
        c=n%10;
        n/=10;
        if(c%2==1){
           if(k==-1){
            k=c;//retinem prima cifra impara;
           }
           else if(c!=k){
            return 0;
           }
        }
    }
    return 1;
}

int main() {
    int n=7790;
    cout<<Egal(n);
return 0;
}

  d c b a
d c b a

a=b;
b=c;
c=d;

SIII ex 3
#include <iostream>
#include <fstream>

using namespace std;
int n,a,b,c,d;

void gen(int n,int a,int b,int c)
{
    if(n==0)
        return;
    d= c+b-a;
   // cout<<a<<" "<<b<<" "<<c<<endl;
    gen(n-1,b,c,d);
    cout<<c<<" ";
}

int main()
{

    cin>>n>>a>>b>>c;
    gen(n-2,a,b,c);
    cout<<b<<" "<<a;
    ///fi=f(i-1)+f(i-2)-f(i-3),
    ///d=   c   +  b   - a;
    return 0;
}

 /// ##############################################

SIII Ex 3 var nerecursiva



/**
 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16
 a  b  c  d
    a  b  c  d
                        d  a    b   c
                        a  b    c        

 fi=f(i-1)+f(i-2)-f(i-3)

 d = c + b - a;
 c = b + a - d;

d=b+a-c;
 a = b;
 b = c;  
 c = d;
*/


#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i,n;
    cin>>n>>a>>b>>c;
    for(int i=4;i<=n;i++){
     d = c + b - a;
     a = b;
     b = c;
     c = d;
    }
    cout<<c<<" "<<b<<" "<<a<<" ";
    for(int i=4;i<=n;i++){
        d=b+a-c;
        cout<<d<<" ";
        c = b;
        b=a;
        a=d;
    }
    return 0;
}

