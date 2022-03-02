///Rezolvare Maurice///
SI

1 c
2 d
3 b
4 c
5 d

SII.
 
1. a) 440
   b) 6,7
   c)
  
  #include <iostream>
  using namespace std;
  int main(){
    int x,n;
    cin >> n;
    x=0;
    for(int i=1;i<=n;i++){
      if(i%2==0) x=x+i*i;
      else       x=x+(i+1)*(i+1);
    }
    cout<<x;
     return 0; 
    }

    d)
citește n (număr natural)
x <- 0
i <- 1      
┌cat timp i<=n execută
│ ┌dacă i%2=0 atunci
│ │ x <- x+i*i
│ │altfel
│ │ x <- x+(i+1)*(i+1)
│ └■
  i <- i+1
└■
scrie x

2)
  strcut clasa{
   int numar;
	struct media{
		float sem1,sem2;
	}elev[40];
   }p;

3)
7volt
  
 SIII
 1)
 void nrfp(int n, int &m){ ///m=cel mai mare nr din [2,n] cu max de fact primi
    int d,k=0,e,nr,kmax=-1;
    m=-1;
    for(int i=2;i<=n;i++){
        k=0; //k=nr de factori primi a lui nr
        d=2;
        nr=i;
        while(nr!=1){  ///descompunerea in factori primi a lui nr
            e=0;
            while(nr%d==0){
                nr=nr/d;
                e++;
            }
            if(e>0) k++;
            d++;
        }
        if(k>=kmax){ //kmax = nr max de fact primi
            m=i;
            kmax=k;
        }
    }
}

2)
  
#include <iostream>

using namespace std;

int main() {
    int a[51][51]={},n,s1=0,s=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(i<j && i+j >n+1){
                s=s+a[i][j];
            }
        }
    }
    
    for(int i=2;i<n;i++){
        s1=s1+a[i][n];
    }
    s=s-s1;
    cout<<s;
    return 0;
}

3)
  #include <iostream>
  #include <fstream>

using namespace std;

int main() {
    ifstream cin("bac.txt");
    int x,y,ok=0,n1=0,n2=0;
    cin >> x;
    if(x%2==1){
        n1=x;
    }
    
    while(cin >> y){
        if(y%2==1){
            if(n1==0){
                n1=y;
            }
            else if(n2==0){
                ok=1;
                n2=y;
            }
            else if(n1!=0 && n2!=0){
                ok=1;
                n1=n2;
                n2=y;
            }
        }    
    }
    if(ok==0) cout<<"nu exista";
    else      cout<<n1<<" "<<n2;
    return 0;
}

/*
Algoritmul este eficient dpdv al timpului de executie, deoarece are o complexitate O(n), unde n reprezinta numerele
citite din fisier.
Algoritmul este eficient dpdv al memoriei, deoarece am folosit doar 5 variabile simple de tipul intreg.
...
*/



/// Popa Madalin ///

SUBIECTUL I

1. c
2. d
3. {cămașă, cravată, pantaloni, pantofi, sacou, șosete}
   cămașă <- cravată <- sacou
   pantaloni, șosete <- pantofi
   (cămașă, cravată, pantaloni, sacou, șosete, pantofi)
   (cămașă, cravată, pantaloni, șosete, pantofi, sacou)
   (cămașă, cravată, pantaloni, șosete, sacou, pantofi)
   (cămașă, cravată, sacou, pantaloni, șosete, pantofi)
   (cămașă, cravată, sacou, șosete, pantaloni, pantofi)
   (cămașă, cravată, șosete, pantaloni, pantofi, sacou)
   (cămașă, cravată, șosete, pantaloni, sacou, pantofi)
   (cămașă, cravată, șosete, sacou, pantaloni, pantofi)
   (b)
4. c
5. d

SUBIECTUL II

1. a)
n = 10  x = 10
P1)  i = 1  ->  x = 4
P2)  i = 2  ->  x = 8
P3)  i = 3  ->  x = 24
P4)  i = 4  ->  x = 40
P5)  i = 5  ->  x = 76
P6)  i = 6  ->  x = 112
P7)  i = 7  ->  x = 176
P8)  i = 8  ->  x = 240
P9)  i = 9  ->  x = 340
P10) i = 10 ->  x = 440
     i = 11 ->  x = 584
	    i = 12 ->  x = 728
	    i = 13 ->  x = 924

b) 6, 13

d)
citește n
x<-0
i<-1
┌cat timp i <= n execută
│ ┌dacă i%2=0 atunci
│ │ x<-x+i*i
│ │altfel
│ │ x<-x+(i+1)*(i+1)
│ └■
│ i <- i + 1
└■
scrie x

2. 
struct media{
    float sem1, sem2;
   };

   struct clasa{
    int numar;
    media elev[40];
   }p;

3. 7volt

SUBIECTUL III

1. 
#include <iostream>

using namespace std;

    int primi (int n){
        for (int j = 2; j * j <= n; j++){
            if (n % j == 0){
                return 0;
            }
        }
        return 1;
    }

    void nrfp (int n, int &m){
        int i = 2, contor, maxx = -1, d;
        while (i <= n){
            contor = 0;
            for (d = 2; d * d <= i; d++){
                if (i % d == 0){
                    if (primi (d) == 1){
                        contor ++;
                    }
                }
            }
            if (contor >= maxx){
                maxx = contor;
                m = i;
            }
            i++;
        }
    }

int main(){
    int n, m;
    cin >> n;
    nrfp (n, m);
    cout << m;
    return 0;
}

2.
#include <iostream>

using namespace std;

int main(){
    int n, a[50][50], i, j, s = 0;
    cin >> n;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if ( (i < j) && (i + j > n - 1) && (j != n - 1)){
                s += a[i][j];
            }
        }
    }
    cout << s;
    return 0;
}

3.
#include <iostream>
#include <fstream>

using namespace std;

    ifstream fin ("bac.txt");

int main(){
    int n, imp1, imp2, ok = 0;
    while (fin >> n){
        if (n % 2 == 1){
            imp1 = imp2;
            imp2 = n;
            ok++;
        }
    }
    if (ok <= 1){
        cout << "Nu exista";
    }
    else cout << imp1 << " " << imp2;
    return 0;
}

/*
Programul este eficient din punct de vedere al timpului de executare avand o complexitate O(n).
Programul este eficient din punct de vedere al memoriei utilizate doarece avem 4 variabile simple.
Programul execuata urmatorii pasi:
  - verifica daca numerele din fisier sunt impare
  - daca exista numere impare vom retine ultima si penultima aparitie si vom incrementa variabila ok cu 1 de fiecare data
  - daca sirul are cel putin doua numere impare vom afisa ultimele doua valori, in caz contrat se va afisa mesajul "Nu exista"
*/
