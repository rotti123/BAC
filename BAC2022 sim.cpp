//SII ex 1c)
#include <iostream>
using namespace std;
int main() {
    int n,x,y,i=1;
    cin>>n>>x;
    int nr=0;
    while(i<=n){
        cin>>y;
        while(y!=0 && (y%2)!=(x%2)){
            y=y/10;
        }
        if(y==x){
            nr++;
        }
        i++;
    }
    cout<<nr;
}
//SII ex 1d)
citește n,x (numere naturale nenule)
nr<-0
┌pentru i<-1,n execută
│ citește y (număr natural)
│┌cât timp y≠0 și y%2≠x%2 execută
││ y<-[y/10]
│└■
│┌dacă y=x atunci nr<-nr+1
│└■
└■
scrie nr


///SII ex 3
ok=0;
for(j=1;j<14;j++)
  if((a[0][j]==a[2][j] && a[1][j-1]==a[1][j+1] && a[0][j]==a[1][j+1])) ok=1;


///SIII ex 1
#include <fstream>
#include <iostream>
using namespace std;
void rest(int x,int y,int n,int &k){
  for(k=n;k>=1;k--){
    if(k%x==2 && k%y==2){
      return ;
    }
  }
  k=0;
}
int main(){
  int n,x,y,k;
  n=3000,x=10,y=101;
  restM(x,y,n,k); ///apelul functiei
  cout<<k;
}

          

  ///  	(づ｡◕‿‿◕｡)づ|l)/

///SIII ex 2
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
 // ifstream cin("bac.txt");
  int ok=0;
char s[250],cuv[250], *p, *ptr,a[250];
  cin.getline(s,250); ///textul nume prenume;..
  cin.getline(cuv,250);
  strcat(cuv," "); ///cuv <- "DAN "
  p=strtok(s,";"); //retin [nume prenume]
  while(p!=NULL){
    strcpy(a,p);
   if(a[0]==' '){
    strcpy(a+0,a+1); ///elimin ' ' din fata
   }
     //   cout<<"#"<<a<<'\n';
    ptr=strstr(a,cuv); ///ptr=textul de la cuv pana in capat din p
    if(ptr!=NULL && strcmp(ptr,a)==0){
      cout<<a+strlen(cuv)<<" "; ///afisez doar prenume (sar peste prenume)
      ok=1;
    }
    p=strtok(NULL,";");
  }
  if(ok==0){
    cout<<"Nu";
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

 
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
 int nrdiv(int n,int d)
{
 int cnt=0,p=1;
  while(p*d<=n){
    p=p*d;
    cnt = cnt + n/p;
  }
  return cnt;
}

int main() {
  int n;
  cin>>n;
  cout<<min(nrdiv(n,3)/2,nrdiv(n,5));;
}

/*

descomp in factori
T(n/5 +n/3) => O(n)

n/5 + n/3 = (3n+5n)/15=8n/15 ~= n/2  

O(log3(n) + log5(n))

45=3^2*5^1

n!=3^p*5^q     3^7*5^6= 3*3^6*5^6=3*(3^2*5^1)^3*5^3
sol=min(p/2,q);
*/

