1b
2c
3a
4c

1 3
1 7
1 8
2 4
3 5
3 6
4 5

n=5
nr=0
i=5	x=0	y=1
j=1	r=2*0-1=-1	x=1	y=-1
j=2	r=2*1-(-1)=3	x=-1	y=3
j=3	r=2*(-1)-3=-5	x=3	y=-5
j=4	r=2*3-(-5)=11	x=-5	y=11
j=5	r=2*(-5)-11=-21 x=11	y=-21

y>0 F   
i=5,4,3,2,1
  0 1 0 1 0 -> nr=2

x1=4
f(10,4) =2 +f(6,4)=2+3
f(6,4)=2+ f(2,4)=2+1=3
f(2,4)=0+ f(2,2)=0+1
f(2,2)=1

x2=10



SII ex 1 

citește n (număr natural)
nr<-0
i<-n
┌cât timp i>=1 execută
│ x<-0; y<-1
│ ┌pentru j<-1,i execută
│ │ r<-2*x-y; x<-y; y<-r
│ └■
│ ┌dacă y>0 atunci
│ │ nr<-nr+1
│ └■
|  i <- i -1
└■
scrie nr



SII ex 3
int main() {
    int a[4][5],i,j;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            a[i][j]=j*4+i+1;
            /// a[i][j]=i*5 +j+1; -> generez numere linie cu linie 1,2,3,..4*5
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

SIII ex1.
 #include <iostream>
#include <fstream>
using namespace std;

void divprimmax(int n, int &p){
    int d=2,e;
    while(n!=1){
        e=0;
        while(n%d==0){
            n=n/d;
            e++;
        }
        if(e>0){
            p=d;
        }
        d++;
    }
}

int main() {
    int n,p;
    cin >> n;
    divprimmax(n,p);
    cout<<p;
} 

SIII ex 2
  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char s[100] = {}, vocale[] = "aeiou", *p, cuv[101] = {};
    int c, v, lung, sol = 0;
    cin.getline (s, 100);
    p = strtok (s, " ");// Preluam primul cuvant din s in p
    while (p != NULL){
        c = 0;
        v = 0;
        strcpy (cuv, p);
        lung = strlen (cuv);
        if (lung % 2 == 0){
            for (int i = 0; i < lung; i++){
                if (strchr(vocale, cuv[i]) != NULL){
                    v++;
                } else c++;
            }
            if (c == v){
                sol++;
            }
        }
        p = strtok (NULL, " "); // preluam urmatorul cuvant in p
    }
    cout<<sol;
}


///SIII ex3
#include <iostream>

using namespace std;

int main() {
    int p1, p2, a, b, c, d, m, nou = 0;
    cin >> p1 >> p2;
    for(a = 1; a <= 9; a++) {
        if(p1 % a == 0) {
            b = p1 / a;
            if(b < 10) {
                for(m = 0; m <= 9; m++) {
                    for(c = 1; c <= 9; c++) {
                        if(p2 % c == 0) {
                            d = p2 / c;
                            if(d < 10)
                                cout << a << b << m << m << m << c << d << ' ';
                        }
                    }
                }
            }
        }
    }
}

/**
 * Algoritmul este eficient dpdv al timpului de executie deoacere are o complexitate O(1),
 * deoarece nr de operatii folosite in cadrul algoritmului nu depaseste 1000.
 * Alg este eficient dpdv al mem deoarece s-au folosit doar opt variabile intregi simple.
 * 
 * Programul stabileste toti divizorii lui p1 sub forma unei perechi (a,b) astfel
 * - parcurgem toate valorile posibile pentru a din [1,9]
 * - daca p1 % a==0 atunci putem calcula b=p1/a
 * - in cazul in care a,b<10 trecem la pasul urmator
 * Aplicam acelasi algoritm pentru a genera divizorii lui p2 sub forma (c,d)
 * In cazul unei solutii o afisam.

 */
