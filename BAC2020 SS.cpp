
SII ex1 c)
  #include <iostream>
using namespace std;

int main() {
    int n,m=0,x;
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>x;
            while(x%10 > (x/10)%10){
                    x=x/10;
            }
            m=m+x;
    }
    if(m>0){
            cout<<m;
    }
    else{
            cout<<"niciunul";
    }
    return 0;
}

SII ex 3
#include <iostream>
using namespace std;
int main() {
  char A[10][10];
  int n,i,j;

  for(i=0;i<7;i++)
    for(j=0;j<7;j++){
     A[i][j]='*';
    }
     for(i=0;i<7;i++){

      for(j=0;j<7;j++){
        if(i>j){
          A[i][j]='+';
        }
        else{
          
        }
        cout<<A[i][j]<<" ";
      }
       cout<<endl;
     }
}

SIII.1
  int multiplu(int n)
{
  int d=1;
  while(d*d%n!=0){
    d++;
  }
  return d*d;
}

SIII.2
int main()
{
  char s[124];
  bool ok=false;
  cin.get(s,124);
  int n=strlen(s);
  for(int i=0;i<n;i++)
  {
      if(s[i]=='<')
          ok=true;
      else if(s[i]=='>')
          ok=false;
      else if(ok && s[i]!=' ')
          s[i]=s[i]+'A'-'a';
  }
  cout<<s;
  return 0;
}
  
SIII.3
  #include <iostream>
#include <fstream>
#include <cstring>
using  namespace std;

int main()
{
  int x , y, z, dif, difmin=100000000, sol=-1;
  ifstream cin("bac.txt");
  cin >> x >> y;
  while (cin >> z){
    if (x<y && z<y){
        dif=abs(x-z);
        if (dif<=difmin){
            difmin=dif;
            sol=y;
        }
    }
    x=y;
    y=z;
  }
  if (sol!=-1){
    cout << sol;
  }
  else {
    cout << "nu exista";
  }
}
 /* Folosim tripletul x, y, z de numere consecutive din sir 
 pentru a testa daca y este varf. In caz afirmativ atunci 
 testam diferenta in modul dintre vecinii lui y si retinem 
 diferenta cea maimica si varful asociat ultimei diferente 
 minime. In functie de rezultatul obtinut afisam solutia sau 
 mesajul nu exista.
    Programul este eficient din punct de vedere al memoriei
deoarece am folosit doar 6 variabile intregi simple.
    Algoritmul are o complexitate liniara O(n) unde n este
numarul de valori citite din fisier.
*/
 


