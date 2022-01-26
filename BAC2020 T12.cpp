SI
1.d
2.a
3.b
4.
5.c

SII:
1.
a)952
b)2000, 2002
c)

#include <iostream>

using namespace std;

int main() {
    int n,nr,c,m;
    cin>>n;
    nr=0;
    c=9;
    while(c>=0){
        m=n;
        while(m!=0 && m%10!=c){
            m=m/10;
        }
        if(m!=0){
            nr=nr*10+m%10;
        }
        c--;
    }
    cout<<nr;
    return 0;
}

d)

citeste n ( numar natural nenul )
nr<-0
c<-9

pentru i<-c,0,-1 executa
   m<-n
   
   cat timp m≠0 si m%10≠c executa
       m<-[m/10]
   sfarsit cat timp
   
   daca m≠0 atunci
       nr<-nr*10+m%10
   sfarsit daca

sfarsit pentru

scrie nr

2.
struct flori{
	int cod,nrVarietati;
	int nrExemplare[10];

}f[20];

3.  12456 13456 23456

SIII:
1.

int pDoi(int n){
    int put2=1;
    while(put2*2<=n){
        put2=put2*2;
    }
    return put2;
}

Simedre Patricia - Test 12 - 2020

I
1) d
2) a
3) f(54321) -> f(5432) -> tip 2
   f(5432) -> f(543)
   f(543) -> f(54) -> tip 4
   f(54) -> f(5)
   f(5) -> f(0) -> 0!=0 (F) 
   tip 24 (a)

5) c. 2

1 2
1 3
2 3
2 4
2 6
3 4
3 5
4 5
4 6

II
1. 
a) 
n=2592 nr=0 c=9
m=2592 m=259 nr=9 c=8
m=2592 m=259 m=25 m=2 m=0 c=7 ...
			  c=5
m=2592 ... m=25 nr=90+5=95 ...
			  c=2 tip 952

b) 2000 2020 2200
d)
citește n (număr natural nenul)
nr<-0

┌pentru c<-9,0,-1 executa
│ m<-n
│┌cât timp m≠0 și m%10c execută
││ m<-[m/10]
│└■
│┌dacă m0 atunci
││ nr<-nr*10+m%10
│└■
│ 
└■
scrie nr

2. struct flori{
	int cod, nrVarietati, nrExemplare[10];
   }f[20];

3.
12456
13456
23456

III

2.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100],voc[]="aeiou";
    int ok=0;
    cin.getline(s,100);
    for(int i=strlen(s)-1; i>0; i--){
        if(strchr(voc,s[i])!=NULL){
            ok=1;
            strcpy(s+i,s+i+1);
            break;
        }
    }
    if(ok==0)
    cout<<"nu exista";
    else
    cout<<s;
    return 0;
}

3.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ofstream cout("bac.out");
    
    int x;
    cin>>x;
    cout<<x<<" ";
    while(x>1){
        if(x>10){
            if(x%2==1)
                x--;
            else
                x=x/2;
        }
        else x--;
    cout<<x<<" ";
    }
    return 0;
}
