///Rezolvare Maurice

BAC 2018 AUGUST

1 b    z<x && 2*z==3*y
2.

n= 10523	m=0	x=0		p=1
c=3 n=1052	m=3	x=0*1+3=3	p=10
c=2			x=33		p=100
c=5		=5	x=533		p=1000

x=55533

a)55533
b)722,-722,712,-712
c) citeşte n
 (număr întreg)
 m<-0
 p<-1
 x<-0
┌dacă n<0 atunci
│ n <- -n
└■
┌cat timp n!=0 executa
│ c<-n%10
│ n<-[n/10]
│┌dacă c>m atunci
││ m<-c
│└■
│ x<-m*p+x
│ p<-p*10
sf cat timp
 scrie x

S2.
1) a
2) skip
3)
struct impartire
{ int cat;
 int rest;
}rezultat;
int x; 

if(x==0) cout<<"impartire nepermisa";
else{
rezultat.cat=2018/x;
rezultat.rest=2018%x;
}

4) 3,8,4,5,7
5)
#include <iostream>
#include <fstream>
using namespace std;
int main(){
 int n,a[100][100]={},b[100]={};
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>b[i];  }
  for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
      if(j%2!=0){
        a[i][j]=b[i];
      }
      else
      a[i][j]=b[n-i-1]; ///a[n-i-1][j]=b[i]
    }
  }
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    cout<<a[i][j]<<" ";
   }
   cout<<'\n';
 }


}


SIII
1)
f(7)= 1f(4)
f(4)= 0f(1)
f(1)= 1

f(7)=101 c

2)
stilou 1
pana 2
toc 3
creion 4
pensula 5

Regula: 4 ianinte de 1 si 2

3 4 1 2 5
3 4 1 5 2
3 4 2 1 5
3 4 2 5 1
3 4 5 1 2

3 4 5 2 1
4 1 2 3 5

3)

int interval(int n){
   int ok=0,x;
   if(n%2==0) n++;
   while(ok==0){
       ok=1;
       for(int d=2;d*d<=n;d++){
           if(n%d==0){
               ok=0;
               break;
           }
       }
       if(ok==1){
           break;
       }
       n+=2;
   }
   x=n+1;
   return x;
}

4)
#include <iostream>
using namespace std;

int main()
{
     int x,y,z;
     cin >> y >> z;
     if(y==0 && z==3){
         cout<<3<<" "<<0;
         return 0;
     }
     cout<<z<<" "<<y<<" ";
     while(x!=0){
         x=2*y-z+2;///gasim fn-2
         if(x==0) break;/// am ajuns la n=2
         cout<<x<<" ";
         z=y;
         y=x;
     }
     cout<<0;
}
/*
Algoritmul este eficient dpdv al timpului de executie deoarece, are o complexitate O(log2(n)), unde n reprezinta numarul de elemente din fisier.
Algoritmul este eficient dpdv al memoriei deoarece am utilizat doar trei variabile intregi simple.
Algoritmul genereaza pentru fiecare doi termeni consecutivi (z si y) un termen anterior x, folosindu-se de formula x = 2*y - z + 2, pana cand se ajunge
la primii doi termeni ai sirului, 3 respectiv 0.
*/

/* 
Ciorna---
z=fn
y=fn-1
x=fn-2

0, 3, 8, 15, 24, 35, 48, 63, 80
x  y  z

fn = 2∙fn-1-fn-2+2 
z=2*y-x+2
x=2*y-z+2

48 63
63 48 35 24 15 8 3 0
z   y  x
    z  y  x

*/
