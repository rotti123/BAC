

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
 /*
f1=x
f2=y
f3=z
f4=z+y-x = 1*(z-x) +y
f5=z+y-x +z -y=2*z -x
f6=2*z - x + z+y-x - z = 2*z -2*x +y
f6=2*(z-x) +y
f7=2*(z-x) +y +2*z -x -(z+y-x)
f7 = 2*z-2*x +y +2*z -x -z -y +x
f7 = 3*z - 2*x 
f8 = 3*z - 2*x + 2*(z-x) +y - (2*z -x)
f8=  3*(z -x) +y

k>2 ...
f[2k] = (k-1)*(z-x) +y
f[2k+1] = k*z -(k-1)*x

i=2*k  --> k=i/2
i=2*k+1  --> k=(i-1)/2
 */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   // ifstream f("bac1.txt");
  //  ifstream h("bac2.txt");
    int x,y,z,k,i,n;
    cin>>n>>x>>y>>z;

    for(i=n;i>=4;i--){
        if(i%2==0){
            k=i/2;
            cout<<(k-1)*(z-x) +y<<" ";
        }
        else{
            k=(i-1)/2;
            cout<<k*z -(k-1)*x<<" ";
        }
    }
    cout<<z<<" "<<y<<" "<<x;
    return 0;
}

////var 

#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    while(n>1)
    {
        if(n%2==0)
            cout<<((n-2)/2)*z-((n-2)/2)*x+y<<" ";
        else
            cout<<(((n-2)/2)+1)*z-((n-2)/2)*x<<" ";
        n--;
    }
    cout<<1;
}

 
 //older
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

