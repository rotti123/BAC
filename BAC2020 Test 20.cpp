//Test 20 BAC2020
SI ex 2
	r	i
f(3)	0	1	r=0+1+f(2)=0+1+4=5
		2	r=5+2+f(1)=5+2+1=8
		3	r=8+3+f(0)=8+3+0=11

f(0) -->0	f(0)=0
f(1)	0	1	r=0+1+f(0)=0+1+0=1
f(1)=1
f(2)	0	1	r=0+1+f(1)=0+1+1=2
		2	r=2+2+f(0)=2+2+0=4
f(3)=11

SII ex 3
#include <iostream>
#include <cstring>
using namespace std;



int main()
{
    char a[7][7]={};
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
           if((i >= j && i+j >= 7-1)||(i<=j && i+j <= 7-1)) {
            a[i][j]='a';
           }
           else{
            a[i][j]='b';
           }
           cout<<a[i][j];
        }
        cout<<endl;
    }


    return 0;
}
///SIII ex 1

#include <iostream>
#include <cstring>
using namespace std;


int transformareBaza10(int b, int n){
    int k=0;
    int c,x=0,p=1;
    while(n){
        c=n%10;
        n=n/10;
        x=x+c*p;
        p=p*b;
    }
    return x;
}

int main()
{
    cout<<transformareBaza10(2,10010);

    return 0;
}

///SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;
char s[101];
char aux[101];
char cuv[101];
char *p;
int main() {
cin.getline(s,100);
p=strtok(s," ");
while (p!=NULL)
{
    strcpy(cuv,p);
    if(strchr(p,',')!=NULL)
    {
        int poz=strchr(p,',')-p;
        cuv[poz]='\0';
    }
    strcat(aux,cuv);
    strcat(aux," ");
    p=strtok(NULL," ");
}
cout<<aux;
    return 0;
}

///SIII ex 3
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main() {
    int x, maxx = -1, last_val, s = 0;
    fin >> x;
    s = x;
    last_val = x;
    while(fin >> x) {
        if(last_val % 2 == x % 2) {
            s = s + x;
        }
        else {
            if(s > maxx) {
                maxx = s;
            }
            s = x;
        }
        last_val = x;
    }
    if(s > maxx) maxx = s;
    cout << maxx;
}

/*
Alg este eficient dpdv al timpului de exec deoarece
are o complexitate O(n), unde n repr nr de elem din fisier
Alg este eficient dpdv al mem utilizate deoarece
am folosit doar patru var intregi simple.

Algoritmul foloseste o parcurgere liniara in care
retinem doua elem consecutive last_val si x, in 
aceasta ordine. Sunt tratate doua cazuri:
 - cand x si last_val au aceeasi paritate
   atunci crestem valoarea sumei
 - cand x si last_val nu au aceeasi paritate
   atunci actualizam suma maxima existenta pana
   in acel moment dat.
   Se trateaza si cazul in care ultima secv este
   cu suma maxima.
   La sfarsitul alg se afiseaza suma maxima.
*/
