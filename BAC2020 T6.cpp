///SII ex 1
i=1 	x=0	y=1		nr=1

i=2	
j=1	r=-1	x=1	y=-1

i=3
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3	nr=2

i=4
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3
j=3	r=-5 	x=3	y=-5

i=5
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3
j=3	r=-5 	x=3	y=-5
j=4	r=11	x=-5	y=11	nr=3
...
i=7
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3
j=3	r=-5 	x=3	y=-5
j=4	r=11	x=-5	y=11	

				R: nr=4
          
 SII ex 2
          x1=6, x2=10
          
///SIII ex 1
void prodprim(int n,int &p){
    int d=2;
    p=1;
    while(n>1){
        if(n%d==0){
            p=p*d;
        }
        while(n%d==0){
            n=n/d;
        }
        d++;
    }
}
///SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101],*p;
    int nrv=0, nrc=0,ok=0;
    cin.getline(s,101);
    p=strtok(s," ");
    while(p!=NULL){
        for(int i=0;i<strlen(p);i++){
            if(strchr("aeiou",p[i])!=NULL){
                nrv++;
            }
            else nrc++;
        }
        if(nrv<nrc){
            cout<<p<<endl;
            ok=1;
        }
        p=strtok(NULL," ");
        nrv=0;
        nrc=0;
    }
    if(ok==0){
        cout<<"nu exista";
    }
    return 0;
}

///SIII ex 3
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ofstream fout("bac.out");

int main()
{
    int p1,p2;
    cin >> p1 >> p2;
    int c1,c2,c6,c7;
    for(c1=9; c1>=1; c1--)
    {
        c2=p1/c1;
        if(c1*c2==p1 && c2<=9)
        {
            for(int c=9; c>=0; c--)
            {
                for(c6=9; c6>=1; c6--)
                {
                    c7=p2/c6;
                    if(c6*c7==p2 && c7<=9)
                    {
                        fout<<c1<<c2<<c<<c<<c<<c6<<c7;
                        fout << endl;

                    }
                }
            }

        }
    }
}
/**
Var I
Vom folosi c1,c2 pentru primele doua cifre.
Stiind ca p1=c1*c2, deducem ca c2=p1/c1.
Iteram c1 de la 9 la 1 si in functie de val lui c1
determinam valoarea lui c2.
Similar putem genera si cifrele asociate lui p2.
In acest mod vom genera descrescator toate solutiile 
posibile.
Observam ca nr maxim de pasi este 9*10*9=810 deci putem
considera complexitatea de timp O(1).
Rezolvarea este eficienta din punct de vedere al memoriei
deoarece folosteste doar 7 variablile de tip int. 

Var II
algoritmul construieste secvential nr cifra cu cifra de la st la dr, astfel:
c1 ia valori de la 9 la 1; daca c1 este divizorul lui p1, atunci c2=p1/c1. 
daca c2 este format dintr o singura cifra, vom construi cele 3 cifre din mijloc
parcurgand intervalul [0, 9] in ordine descrescatoare, iar pt construirea cifrelor c3 si c4 se respecta criteriile de la c1 si c2. 
*/
