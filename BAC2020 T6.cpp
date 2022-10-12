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
#include <fstream>

using namespace std;

int main ()
{
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int p1, p2, c1, c2, c3, c4, c;
  cin>>p1>>p2;
  for(c1=9; c1>=1; c1--){
    if(p1%c1==0){
      c2=p1/c1;
      if(c2<10){
        for(c=9; c>=0; c--){
          for(c3=9; c3>=1; c3--){
            if(p2%c3==0){
              c4=p2/c3;
              if(c4<10){
                cout<<c1<<c2<<c<<c<<c<<c3<<c4<<'\n';
              }
            }
          }
        }
      }
    }
  }
}

/* programul este eficient dpdv al timpului de executie, deoarece are un nr redus de operatii. 
definim p1=c1*c2, p2=c3*c4, iar nr cerut este de forma c1 c2 c c c c3 c4
programul are o complexitate O(9*9*10*9*9)->O(1).

algoritmul construieste secvential nr cifra cu cifra de la st la dr, astfel: c1 ia valori de la 9 la 1; daca c1 este divizorul lui p1, atunci c2=p1/c1. daca c2 este format dintr o singura cifra, vom construi cele 3 cifre din mijloc parcurgand intervalul [0, 9] in ordine descrescatoare, iar pt construirea cifrelor c3 si c4 se respecta criteriile de la c1 si c2. 
*/
