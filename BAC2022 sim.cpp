///SII ex 3
ok=0;
for(j=1;j<14;j++)
  if((a[0][j]==a[2][j] && a[1][j-1]==a[1][j+1] && a[0][j]==a[1][j+1])) ok=1;


///SIII ex 1
#include <fstream>
#include <iostream>
using namespace std;
void rest(int x,int y,int n,int &k){
     for(int i=1; i<=n; i++){
        if(i%y==2 && i%x==2){
            k=i;
        }
    }
}

void restM(int x,int y,int n,int &k){
    k=0;
    for(int i=1; i<=n; i++){
        if(i%y==2 && i%x==2){
            k=i;
        }
    }

}
int main(){
  int n,x,y,k;
  n=3000,x=10,y=101;
  restM(x,y,n,k); ///apelul functiei
  cout<<k;
}

          

  ///  	(づ｡◕‿‿◕｡)づ|l)/

///SIII ex 2
#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
  int ok=0;
  char s[250],x[50],*p,prenume[50],nume[50];
  cin.getline(s,250);
  cin.getline(x,50);
  p=strtok(s,"; ");
  strcpy(prenume,p);
  p=strtok(NULL," ;");
  strcpy(nume,p);
  while(p!=NULL){
      if(strcmp(x,prenume)==0){
         ok=1;
         cout<<nume<<" ";
      }
      p=strtok(NULL,"; ");
      strcpy(prenume,p);
      p=strtok(NULL," ;");
      strcpy(nume,p);
  }
}

///SIII ex 3

#include <iostream>
#include <fstream>

using namespace std;

int main() {
 // ifstream cin("bac.txt");
//  ofstream cout("bac.out");
  int n, cnt5=0,cnt3=0,nr,i;
  cin>>n;
  for (i=5; i<=n; i+=5)
    {
      nr=i;
      while(nr%5==0)
        {
          cnt5++;
          nr/=5; // nr=nr/5;
        }
       
    }
  for(i=3;i<=n;i+=3)
    {
      nr=i;
      while(nr%3==0)
        {
          cnt3++;
          nr/=3;
        }
    }

if (cnt5>cnt3/2)
  cout<<cnt3/2;
  else
  cout<<cnt5;
    return 0;
}
/*
Algoritmul este eficient dpdv al memoriei deoarece foloseste doar cinci variabile intregi simple.
Algoritmul este eficient dpdv al timpului de executie deoarece are o complexitate O(n/5+n/3), unde n este numarul citit

Algoritmul va calcula puterea la care apare 3 in descomp in fact primi a lui n in var cnt3. Similar va calcula cnt5 pentru factorul prim 5 din desc.
Rezultatul final este min(cnt3/2,cnt5).
*/

#include <iostream>
#include <fstream>
using namespace std;
//ifstream f("bac1.txt");
//ifstream g("bac2.txt");

int desc(int n, int d) {
  int cnt = 0,p=d;
  while(n / p > 0) {
    cnt=cnt+n/p;
    p=p*d;
  }
  return cnt;
}

int main() {
  ofstream cout("bac.txt");
  int n, frecv_3 = 0, frecv_5 = 0;
  cin>>n;
  frecv_3=desc(n,3);
  frecv_5=desc(n,5);
  int sol=min(frecv_5,frecv_3/2);
  cout<<sol;
}


  ///  	(づ｡◕‿‿◕｡)づ|l)/

SIII ex 3
  #include <fstream>
#include <iostream>
using namespace std;
int descomp(int n, int d){ //calc de cate ori se poate
  int cnt=0;       ///imparti n la d
  while(n%d==0){
    cnt++;
    n=n/d;
  }
  return cnt;
}

int main(){
  int n,p1=0,p2=0;  //n!=3^p1*5^p2*k;
  cin>>n;
  for(int i=1; i<=n; i++){
    p1=p1+descomp(i,3);
    p2=p2+descomp(i,5);
  }
  cout<<min(p1/2,p2);
}
/*
Alg este eficient dpdv al timpului de exec deoarece are o complexitate
O(n).
Alg este eficient dpdv al mem deoarece se folosesc doar
  patru variabile intregi simple
Pentru intervalul [1,n] se realizeaza descompunerea fiecarui numar
cu 3 si cu 5 si retinem aceste valori in p1 si p2.
Rezultatul final este min(p1/2, p2)
*/
SIII ex3 O(log3(n)+log5(n))
#include <fstream>
#include <iostream>
using namespace std;

int main(){
  int n,p3=0,p5=0, pow3=3, pow5=5;  //n!=3^p1*5^p2*k;
  cin>>n;
  while(n/pow3>0){
    p3=p3+n/pow3;
    pow3=3*pow3;

  }
  while(n/pow5>0){
    p5=p5+n/pow5;
    pow5=5*pow5;
  }
  cout<<min(p3/2,p5);
}
/*
Alg este eficient dpdv al timpului de exec deoarece are o complexitate O(log3(n)+log5(n))
Alg este eficient dpdv al mem deoarece se folosesc doar
  cinci variabile intregi simple
Se calculeaza puterea pentru factorul prim 3 astfel:
 p3 = [n/3]+[n/3^2]+...
Iar pentru factorul prim 5 avem:
 p5= [n/5] +[n/5^2] +...
Rezultatul final este min(p3/2, p5)
*/


  ///  	(づ｡◕‿‿◕｡)づ|l)/

          

  ///  	(づ｡◕‿‿◕｡)づ|l)/

