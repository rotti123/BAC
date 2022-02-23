<Ilea Robert>
SI:
1.b
2.c
3.b
4.d
5.c

SII:
1)
a)ABABABAB
b)19 20
c)
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    if(x<y){
        x=x-y;
        y=x+y;
        x=y-x;
    }
    while(x>=y){
        cout<<"A";
        x=x-y;
        if(x%2==0){
            cout<<"A";
        }
        else{
            cout<<"B";
        }
    }
    return 0;
}
d)
citeste x,y(numere naturale)
daca x<y atunci
   x<-x-y; y<-x+y; x<-y-x;
sfarsit daca
executa
   scrie 'A'
   x<-x-y;
   daca x%2=0 atunci scrie 'A'
   sfarsit daca
   altfel scrie 'B'
   sfarsit altfel
pana cand x<y;

2) 
struct elev{
	int cod;
        float nota1,nota2;
}y[30]

3) pom
   verde

SIII:
1)
int armonie(int x, int y){
    int s=0,s1=0,s2=0;
    s=x+y;
    for(int d=1;d<=x;d++){
        if(x%d==0){
            s1=s1+d;
        }
    }
    for(int d=1;d<=y;d++){
        if(y%d==0){
            s2=s2+d;
        }
    }
    if(s>s1 && s<s2) return 1;
    else return 0;
}

2)
#include <iostream>
using namespace std;



int main() {
    int m,n,a[20][20]={},k=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
   for(int i=1;i<=m-1;i++){
        for(int j=1;j<=n-1;j++){
            if(a[i][j]==a[i+2][n]){
                cout<<a[i][j]<<" ";
            }
        }
    }
    return 0;
}
3)
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.txt");
    int x,y,k=1;
    cin>>x;
    while(cin>>y){
        if(y<x){
            k++;
        }
    }
    cout<<k;
    return 0;
}
/*Algoritmul este eficient din punct de vedere al timpului de executie,
  avand o complexitate O(n),unde n reprezinta numarul elementelor din
  sir;
  Algoritmul este eficient din punct de vedere al memoriei deoarece am
  utilizat doar 3 variabile intregi simple.
  Programul executa urmatorii pasi:
  -citeste prima valoare si o si retine.
  -citeste in mod repetat urmatoarele valori
  -daca gasim o valoare mai mica decat prima valoare atunci marim 
  numarul de elemente mai mici decat primul.
  -la final afiseaza numarul de elemente ce indeplinesc conditia 
  impusa anterior.*/


SIII ex 2
	#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  ifstream cin("bac.txt");
  int m,n,a[21][21]={},ok=0;
  cin >> n >> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin >> a[i][j];
    }
  }

  for(int j=1;j<=m;j++){
    for(int i=n;i>=2;i--){
      if(a[1][j]==a[i][m]){
        ok=1;
        cout<<a[1][j]<<" ";
      }
    }
  }
  if(ok==0) cout<<"nu exista";
  return 0;
}
 
///Rezolvare Maurice///
SI
 1 b
 2 c
 3 b
 4 d
 5 c
    
SII
1)
	a)
x=2	y=9
x=-7	y=-7+9=2	x=9 => x=9 y=2
A
x = 7 B
A
x=5 B
A
x=3 B
A
x=1 B
STOP
R: ABABABAB
	b)
	18,19,20
	
	c)
#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin >> x >> y;
	if(x<y){
		x=x-y;
		y=x+y;
		x=y-x;
	}
	
	while(x>=y){
	cout<<'A';
	x=x-y;
	if(x%2==0) cout<<'A';
	else 	   cout<<'B';
	}
	return 0;
	
}
d)
	citeşte x,y (numere naturale)
	┌dacă x<y atunci
	│ x<-x-y; y<-x+y; x<-y-x
	└sf daca
	
	daca(x>=y) atunci
	┌repeta
	│ scrie ’A’
	│ x<-x-y
	│┌dacă x%2=0 atunci scrie ’A’
	││altfel scrie ’B’
	│└sf daca
	└pana cand (x<y)
	sf daca
	
2)
	struct elev{
	int cod;
	float nota1,nota2;
	}y[30];
	
	
	
	
	 
3)
	    01234567
	 s="vorbeste";
	s[3]=s[0]   b=v vorveste
	s[5]=s[2]   s=r vorverte
	s[0]=s[1]+1 v=p porverte
	s[2]=s[1]-2	r=m pomverte
	s[6]=s[4]-1 e=d pomverde
	
	abcdefghijklmnopqrstuvwyz
	
	s="pomverde"
	t=pom
	
	Afisaj:
	pom
	verde
	
	
SIII
1)
#include <iostream>
using namespace std;
int armonie(int x, int y){
    int c1=0,c2=0,d;
    for(d=1;d*d<=x;d++){
        if(x%d==0){
            ///cout<<d<<" "<<x/d<<endl;
            c1=c1+d+x/d;
        }
    }
   /// cout<<c1<<endl;
    for(d=1;d*d<=y;d++){
        if(y%d==0){
            ///cout<<d<<" "<<y/d<<endl;
            c2=c2+d+y/d;
        }
        if(d*d==y){
            c2=c2-d;
        }
    }
   ///cout<<c2<<endl;
    if(x+y > c1 && x+y < c2) return 1;
    else return 0;
}
div 12=1,2,3,4,6,12
div 8= 1 2 4 8
2)
  #include <iostream>
using namespace std;
int main() {
    int a[21][21]={}, ok=0,m,n;
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    
    for(int j=1;j<=n;j++){
        for(int i=m;i>=2;i--){
            ///cout<<a[1][j]<<" "<<a[i][n]<<'\n';
            if(a[1][j]==a[i][n]){
                ok=1;
               cout<<a[i][n]<<" ";
            }
            else if(j==n) break;
        }
    }
    
    if(ok==0) cout<<"nu exista";
    
    
    return 0;
}
3)
  #include <iostream>
  #include <fstream>
using namespace std;
int main() {
    ifstreeam cin("bac.txt");
    int x,y,k=0;
    cin >> x;
    while(cin >> y){
        if(y<x){
            k++;
        }
    }
    k++;/// numarul se va afla pe pozitia urmatoare 
    cout<<k;
    return 0;
}
/*
Algoritmul este eficient dpdv al tipului de executie deoarece, are o complexitate O(n), unde n reprezinta numerele citite din fisier.
Algoritmul este eficient dpdv al memoriei deoarece, am folosit doar 3 variabile simple de tipul intreg.
Aloritmul functioneaza urmand urm. pasi:
1. Citeste un numar x (primul numar din fisier)
2. Algoritmul numara cate numere sunt mai mici decat x intr-un contor k, deoarece acele numere vor fi in fata lui x ca si pozitie;
3. Algoritmul returneza valoarea k, unde k reprezinta pozitia numarului x in sirul sortat crescator.
*/

///End file///
