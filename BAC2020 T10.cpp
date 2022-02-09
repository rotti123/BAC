- Simedre Patricia - test 10 - 2020

SI
1. d. 20%(20/x)==0
2.
f(19,20) -> r f(2*19-20,20+1) -> f(18,21)
f(18,21) -> r f(2*18-21,22) -> f(14,22)
f(15,22) -> r f(2*15-22,23) -> f(8,23)
            r f(2*8-23,24)  -> f(-7,24) 
b) 24

3.
{1,3,5}
cal=1
câine=2
papagal=3
porumbel=4
ponei=5

2121 2122 2123 2124 2125    1
2132 2134                   2
2141 2142 2143 (2144) 2145  3
2152 (2154)                 4
2212 2214                   5
2221 2222 2223 (2224) 2225  6
2232 (2234)                 7
2241 2242 2243 2244 2245    8
2252 2254                   9
2321 2322 2323 2324 2325    10
2341 2342 2343 2344 2345    11
2412 2414                   12
2421 2422 2423 2424 2425    13
2432 2434                   14
2441 2442 2443 2444 2445    15
2452 2454                   16
2521 2522 2523 2524 2525    17
2541 2542 2523 2524 2525    18 (b)



4. frunze: 1,3,5,6 (a)

SII
1. 
x=16 y=7
x=7 y=16
i=7 j=16 s=0
s=0+16=16
i=8 j=15
s=16+8=24
i=9 j=14
s=24+14=38
i=10 j=13
s=38+10=48
i=11 j=12
s=48+12=60

a) 60

b)x=10 s=90 y=?

c)
#include <iostream>
using namespace std;

int main() {
   int x,y,i,j,s,aux;
   cin>>x>>y;
   if(x>y){
       aux=x;
       x=y;
       y=aux;
   }
   i=x; j=y; s=0;
   do{
       s=s+(i%2)*j+(j%2)*i;
       i++; j--;
   } while(i<=j);
   cout<<s;
    return 0;
}

d) 
citește x,y
 (numere naturale nenule)
┌dacă x>y atunci
| x<-→y
└■
i<-x; j<-y; s<-0
┌cat timp i<=j executa
| s<-s+(i%2)*j+(j%2)*i
│ i<-i+1; j<-j-1
└sfarsit cat timp
scrie s

2. 
struct spectacol{
 int cod, nrActori, varsta[9]; 
}s[19];

3.
#include <iostream>

using namespace std;

int main() {
    int a[4][5],i,j;
    for(i=0; i<=3; i++)
        for(j=0; j<=4; j++)
            a[i][j]=5*(i+1)-j;
            
    for(i=0; i<=3; i++,cout<<endl)
        for(j=0; j<=4; j++)
            cout<<a[i][j]<<" ";
    return 0;
}

SIII



- Ilea Robert -
            
S1:
1.d
2.b
3.c
4.a

S2:
1) 
a) 60
b) 20 21
c)

#include <iostream>
using namespace std;

int main() {
    int x,y,s,i,j,aux;
    cin>>x>>y;
    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }
    i=x;
    j=y;
    s=0;
    do{
        s=s+(i%2)*j+(j%2)*i;
        i++;
        j--;
    }while(i<=j);
    cout<<s;
    return 0;
}

d) 
citeste x,y

daca x>y atunci
    x<->y
sfarsit daca
i<-x; j<-y; s<-0;
cat timp i<=j executa
    s<-s+(i%2)*j+(j%2)*i
    i<-i+1;
    j<-j-1;
sfarsit cat timp
scrie s

2)

struct spectacol{
	int cod,nrActori,varsta;
}s[20];

3)

for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            a[i][j]=5*(i+1)-j;
        }
}

SIII:
1)

void produs(int n, int &p){
    int c;
    p=1;
    while(n!=0){
        c=n%10;
        n/=10;
        if(c%2==0 && c!=p){
            p=p*c;
        }
    }
    cout<<p;
}


SIII ex 2)
	
#include <bits/stdc++.h>
using namespace std;


int main() {
   ifstream cin("test.in");
   ofstream cout("test.out");
   char s[700], *p, a[700]={}, c[700]={}, ch1 ,ch2 ;
    cin.getline (s, 100);
    p=strtok(s," "); // Retinem primul cuvant
    strcat(a,p);
    strcat(a," ");
   ch1=p[strlen(p)-1]; // Retinem ultima litera a cuvantului anterior
   p=strtok(NULL," "); // Retinem urmatorul cuvant

  while(p){
    ch2=p[strlen(p)-1];
    if(ch1==ch2){ // coincid ultimele caractere -> inseram cuv. "succes"
     strcat(a,"succes ");
    }
    strcat(a,p);
    strcat(a," ");
    ch1=ch2;
    p=strtok(NULL," ");///preluam urm. cuv.
  }
  strcpy(s,a);/// am modificat in memorie sirul s
  cout<<s;

    return 0;
}
	

SIII ex 3
	
#include <bits/stdc++.h>
using namespace std;


int main() {
   ifstream cin("test.in");
   ofstream cout("test.out");
   
   int a,b,c,r,lung,lmax=0,rmax=0,ok=0;

   cin >> a >> b;
   lung=2;
   while(cin >> c){
     if(b==(a+c)/2){
       ok=1;
       r=c-b;
       lung++;
     }
     else{ // c NU face parte dintr-o progresie
       if(lung>lmax){
         lmax=lung;
         rmax=r;
       }
      else if(lung==lmax){
         if(r>rmax){
           rmax=r;
         }
       }
       lung=2;
     }
     a=b;
     b=c;
   }
     if(lung>lmax){  ///verific cazul in care ultimul nr
         lmax=lung;  /// se afla in progresia de rmax
         rmax=r;
       }
      else if(lung==lmax){
         if(r>rmax){
           rmax=r;
         }
       }
   if(ok==0){
     cout<<"nu exista";
   }
   else{
     cout<<rmax;
   }
    return 0;
}
/*
Alg are o complexitate O(n), n nr de elem din fisier
Alg este eficient dpdv al memoriei deoarece, am folosit doar 8 variabile simple de tipul intreg.

de completat....
*/
Subiectul III:

Exercitiul 1:
void produs(int n,int &p){
    p=1;
    int c,a[10]={};
    while(n!=0){
        c=n%10;
        n=n/10;
        if(c%2==0 && a[c]==0){
            p=p*c;
            a[c]=1;
        }
    }
    if(p==1){
        p=-1;
    }
}






