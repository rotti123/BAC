-Popa Madalin-
SUB I
1. a
2. c
3. {cască, costum de înot, cleme, dopuri de urechi, plută, mască de snorkeling, ochelari, snorkel}
  cască - 40
	costum de înot - 400
	cleme - 30
	dopuri de urechi - 30
	plută - 10
	mască de snorkeling - 400
	ochelari - 70
	snorkel - 60
	(cască, costum de înot, cleme, dopuri de urechi), (cască, costum de înot, snorkel), (cască, cleme, dopuri de urechi, mască de snorkeling), (casca, masca de snorkeling, snorkel), (costum de înot, cleme, plută, snorkel)
4. c

SUB II

1. 
a) n = 1527894
   m = 0
   P1)  c = 4  n = 152789  m = 4
   P2)  c = 9  n = 15278   m = 41
   P3)  c = 8  n = 1527    m = 418
   P4)  c = 7  n = 152     m = 4188
   P5)  c = 2  n = 15      m = 41882
   P6)  c = 5  n = 1       m = 418826
   P7   c = 1  n = 0       m = 4188262
   afiseaza 4188262

b) 9, 90, 900

d) citește n 
 m<-0
┌cat timp n > 0 executa
│ c<-n%10; n<-[n/10]
│┌dacă c=9 atunci c<-1
││altfel
││┌dacă c%2=1 atunci
│││c<-c+1
││└■
│└■
│ m<-m*10+c
└■
scrie m

2. 
for (int i = 0; i < 20; i++){
        cin >> r[i].cod >> r[i].nrExemplare >> r[i].varsta[3];
    }
	
3. for (int i = 0; i < 5; i++){
        for (int j = 6; j >= 0; j--){
            if (i == 0 || j == 6){
                a[i][j] = 1;
            }
            else{
                a[i][j] = (a[i-1][j] + a[i][j+1]) % 10;
            }
        }
    }
	
Sub III

1. 
int perechi (int n){
        int a, b, jum = n / 2, ok = 0, precedent = 0;
        for (a = 1; a < jum; a++){
            if (n % a == 0){
                b = n / a;
                if (a % 2 != b % 2 && precedent != b){
                    precedent = a;
                    ok = 1;
                    if (a > b){
                        cout << "[" << b << " " << a << "]";
                    } else if (a <= b){
                        cout << "[" << a << " " << b << "]";
                    }
                }
            }
        }
        if (ok == 0){
            cout << "Nu exista";
        }
    }
	
2.
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101] = {}, *p, nou[101] = {}, cuv[101] = {};
    cin.getline (s, 101);
    p = strtok (s, " ");
    while ( p != NULL){
        strcpy (cuv, p);
        if ( strchr (cuv, '-') != NULL){
            strcpy (cuv, cuv + 1);
        }
        strcat (nou, cuv);
        strcat (nou, " ");
        p = strtok (NULL, " ");
    }
    strcpy (s, nou);
    cout << s;
    return 0;
}

3.
#include <iostream>
#include <fstream>

using namespace std;

    ifstream fin ("bac.in");

int main() {
    int n, k = 0, a[50], nr;
    while (fin >> n){
        if (n % 100 == 20){
            a[k] = n;
            k++;
        }
    }
    for (int i = 0; i < k - 1; i++){
        for (int j = 0; j < k - i - 1; j++){
            if (a[j] > a[j + 1] ){
                nr = a[j];
                a[j] = a[j + 1];
                a[j + 1] = nr;
            }
        }
    }
    for (int i = 0; i < 3; i++){
        cout << a[i] << " ";
    }
    return 0;
}

/*
 Programul este eficient din punct de vedere al timpului de executie avand o complexitate O(n^2).
 Programul este eficient din punct de vedere al memoriei utilizate deoarece foloseste 6 variabile simple.
 Programul executa urmatorii pasi:
 * sunt citite numerele din fisier iar cele care au pe penultima pozitie cifra 2 si pe ultima pozitie cifra 0 sunt memorate in vectorul a
 * numerele memorate in vectorul a sunt sortate crescator
 * la final se afiseaza 3 dintre cele mai mici numere din vectorul a
*/

- Simedre Patricia - 
	
SI
1) (a) !(x< -2002 || x>2020) -> (x>=-2002 && x<=2020)

2) f(2020,20) -> x=2020, y=20 -> f(101,2000)
                 x=101, y=2000 -> r f(0,-1899)
                 x=0, y=-1899 -> r -1899 (c)

3)
1.casca
2.costum de înot
3.cleme
4.dopuri de urechi
5.plută
6.mască de snorkeling
7.ochelari
8.snorkel

12345
128
1346
168
2358 (b)

4) (c) (3,5,5,6,0,5) - frunzele sunt 1,2,4

SII
1.
a)
n=1527894
m=0
c=4 (nu este cifra impara)
m=4
c=9 -> 1
m=41 c=8 m=418
... 
m=4188262

b) 9,90,900

d)
citește n (număr natural)
m<-0
┌cat timp n>0 executa
│ c<-n%10; n<-[n/10]
│┌dacă c=9 atunci c<-1
││altfel
││┌dacă c%2=1 atunci
│││c<-c+1
││└■
│└■
│ m<-m*10+c
└■
scrie m

2)
struct rasa{
int cod, nrExemplare, varsta[10];
} v[20];

SIII
1)
#include <iostream>

using namespace std;

void divizoripereche(int n){
    int a,b,nr=0;
    for(b=n; b>0; b--){
        for(a=1; a<b; a++){
            if(a*b==n){
                if(a%2==1 && b%2==0 || a%2==0 && b%2==1){
                    cout<<"["<<a<<" "<<b<<"]"<<" ";
                    nr++;
                }
            }
        }
    }
    if(nr==0)
    cout<<"nu exista";
}

int main() {
    divizoripereche(12);
    return 0;
}

2)
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101],cif[]="0123456789";
    cin.getline(s,101);
    for(int i=1; i<strlen(s)-1;i++){
        if(strchr("-",s[i])&& strchr(cif,s[i+1])){
            strcpy(s+i,s+i+1);
        }
    }
    cout<<s;
    return 0;
}
