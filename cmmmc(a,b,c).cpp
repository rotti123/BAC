/*
Avem trei numere naturale nenule a,b,c.
Calculati cmmmc(a,b,c).

cmmmc(a,b,c)=a*b*c/(cmmdc(a,c)*cmmdc(b,c)), unde a<=b, b<=c
*/

#include <iostream>
using namespace std;

int main(){
    int a,b,c,x,d,r,y,d1,d2;//x= cmmmc(a,b,c)
    int m,n,p;
    
    cin>>a>>b>>c;
      ///stabilim ordinea crescatoare a,b,c
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    if(b>c){
        x=b;
        b=c;
        c=x;
    }
    
    if(a>c){
        x=c;
        c=a;
        a=x;
    }
    
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    
    n=a;m=b;p=c;
    
    x=a*b*c; 
    /// calc d1=cmmdc(a,c)
    while(c!=0){
        r=a%c;
        a=c;
        c=r;
    }
    d1=a;
    
    a=n;c=p;
    /// calc d2=cmmdc(b,c) 
    while(c!=0){
        r=b%c;
        b=c;
        c=r;
    }
    d2=b;
    cout<<x/(d1*d2);
    
}
