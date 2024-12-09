II.5

#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int n,m,a[50][50]= {};
    cin>>m>>n;
    int ok=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++) cin>>a[i][j];
    }
    for(int j=0; j<n; j++)
    {
        int k=0;
        for(int i=0; i<m; i++)
        {
            if(a[i][j]!=a[0][j])
                k=1;
        }
        if(k==0){
            ok=1;
            cout<<a[0][j]<<" ";
        }
    }
    if(ok==0) cout<<"Nu exista";
}



1, 8, 3, 6, 5, 4, 7, 2
1  2  3  4  5  6  7  8

for(int i=1;i<=2*n;i=i+2){
	v[i]=i;
}
int k=2;
for(int i=2*n;i>=2;i=i-2){
	v[i]=k;
	k=k+2;
}





 1	000
2	001
3	010
4	011
	
 5 MMAAM   100
 6 MMAMM    101

35=32+2+1 = 100011

2^5 100000
2^1 10
2^0 1



x^8 = x^4*x^4
 x^7 = x* x^6  [1]
 x^7 = x* x^3 * x^3





f(2,3) =2* f(2,2)=2*2*2=8
f(2,2) = 2*f(2,1)=2*2
f(2,1)=2

if(x.v%2==0)
    x.paritate = 'p';
 else
    x.paritate='i';


Arbore n=5 m=4
d1+d2+d3+d4+d5=2*m = 2*4 = 8
1+1+1+d4+d5 = 8
d4+d5 = 5 
R: 2 3


citeşte a,b,c (numere naturale,
 a≤b, 0≤c≤9)
 s←0
┌pentru x←a,b execută
│ y←x
  daca y>0 atunci
│┌repeta 
││┌dacă y%10=c atunci
│││ s←s+1
││└■
││ y←[y/10]
│└■ pana cand y<=0
└■
scrie s 


a:b

a=b*cat + rest
cat = a/b
rest =a%b

-3/4  =0
-3 = 4*0 + rest
rest  = -3



1...10  [2]
11 12..19 [9+1]
20 


#include <iostream>
#include <cstring>
using  namespace std;

int valuri(int v[],int n)
{
    for(int i=1; i<=2*n; i=i+2)
    {
        v[i]=i;
    }
    for( int i=2; i<=2*n; i=i+2){
        v[i]=2*n+2-i;
    }
    /*
    int k=2;
    for(int i=2*n; i>=2; i=i-2)
    {
        v[i]=k;
        k=k+2;
    }
    */
}
void afisare(int v[],int n){
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int exp_rap(int x,int y)
{
    if(y==0) return 1;
    int putere = exp_rap(x,y/2);
    if(y%2==0)
        return putere * putere;
    else
        return x * putere * putere;
}


int main()
{
   int x;
   cin>>x;
   while(x>1){
    cout<<x<<' ';
    if(x%2==0){
        x=x-1;
    }
    else{
        x=x/2+1;
    }

   }
   cout<<1;

    /*
    int n=4,v[1000];
    valuri(v,n);
    afisare(v,2*n);
    int n,m,a[51][51],ok,sol=0;
    cin>>m>>n;
    int rad = pow(n, 0.5);
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=1; j<=n; j++)
    {
        ok=1;
        for(int i=1; i<=m; i++)
        {
            if(a[i][j]!=a[1][j])
            {
                ok=0;
                break;
            }

        }
        if(ok==1)
        {
            sol=1;
            cout<<a[1][j]<< " ";
        }
    }
    if(sol==0)
    {
        cout<<"nu exista";
    }
*/
}


