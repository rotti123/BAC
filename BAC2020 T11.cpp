S1:
1.d 
2.d
3.a
4.b
5.c

S2:
1. 

a)10
b)1111, 1110, 1100
c)
#include <iostream>

using namespace std;

int main() {
    int n,m=0,c;
    cin>>n;
    if(n==0) m=10;
    else{
        do{
            c=n%10;
            n/=10;
            if(c>=m){
                m=c;
            }
            else{
                m=10;
            }
        }
        while(n!=0);
    }
    cout<<m;
    return 0;
}

d) citeste n (numar natural)
   m<-0
   daca n=0 atunci
	m<-10
   sfarsit daca
   altfel
      cat timp n≠0 executa
	  c<-n%10
	  n<-[n/10]
	  daca c>=m atunci
		m<-c
	  sfarsit daca
	  altfel
  	      m<-10
	  sfarsit altfel
      sfarsit cat timp
   sfarsit altfel
   scrie m
2.

struct sera{
	int numar;
    struct{
		char denumireStiintifica[20],denumirePopulara[20]
	}specie[100];
}s;

///SII ex 3
#include <iostream>

using namespace std;

int main() ///antetul functiei main
{      
  int a[7][7],p=1,i,j;
  for(i=0;i<7;i++){
      for(j=0;j<7;j++){
          cin >> a[i][j];
      }
  }
  ///scrie pe foaie de examen de aici
  for(i=0;i<7;i++){
      p=p*a[i][i];
  }
  
  for(i=6;i>=0;i--){
      cout<<p<<" ";
      p=p/a[i][i];
  }
  
  //pana aici
}

///SIII ex1
#include <iostream>

using namespace std;

    void patrate (int x, int y){
        int p = 1, s = 0;
        while (p * p < x){
            p++;
        }
        while (p * p <= y){
            cout << p * p;
            s = s + p * p;
            p++;
            if (p * p <= y){
                cout << "+" ;
            }
        }
        if (s == 0){
            cout << "Nu exista";
            return;
        }
        cout << "=";
        cout << s;
    }

int main() ///antetul functiei main
{      
  int x, y;
  cin >> x >> y;
  patrate (x, y);
}

ex 3:
#include <iostream>

using namespace std;

int main() {
    int x,k=1,n;
    cin>>n;//citim primnul numar
    while(cin>>x){ //incepem sa citim de la al doilea numar
        if(n==x) k++;//daca gasim doua numere egale crestem aparitia acestora
        else{
            cout<<n<<" "<<k<< " ";//afisam numarul si de cate ori apare
            k=1;//resetam aparitia pentru a putea compara iar
        }
        n=x;//n devine urmatorul numar
    }
    cout<<n<<" "<<k;
    return 0;
}
/* Programul este eficient din punct de vedere al timpului de executie 
   avand o complexitate O(x).
   Programul este eficient din punct de vedere al memoriei deoarece am
   utilizat doar 3 variabile simple de tip intreg.
   Programul executa urmatorii pasi:
   -se citeste primul numar din sir, dupa care incepem citirea repetata de la
   al doilea numar.
   -verifica daca primul numar citit este egal cu al doilea, in caz afirmativ
   ii crestem aparitia,iar in caz negativ afisam numarul si cifra k , unde k 
   reprezinta numarul de aparitii al acestuia.
   -la final schimbam valoarea lui n cu valoarea urmatoare.
   /*


