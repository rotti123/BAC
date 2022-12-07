SI
1 d
2 d
f(2,20) -> f(3,19) 22
f(3,19) -> f(5,18) 22
f(5,18) -> f(9,17) 23
f(9,17) -> f(17,16) 26
f(17,16) -> 33

3) b
Meteora ___ _____
A(4,2)-A(3,2) = 4!/2!-3!/1!=3*4-6=6

4) a

SII
1 9
2 8	10
3 7
4 6	10
5 5
6 4



SII d)

citește x,y
 (numere naturale x≤y)
i<-x; j<-y; s<-0
 dacă i≤j atunci
┌repetă
│┌dacă i%2=0 atunci
││   s<-s+j
│└sf dacă
│┌dacă j%2=0 atunci
││   s<-s+i
│└sf dacă
│i<-i+1; j<-j-1
└până când i>j
sf dacă
scrie s
SIII ex 2.
 #include <iostream>
#include <cstring>
using namespace std;
int main() {
  char s[101], *p , s1[202]={},cuv[101];
  int ok=1;
  cin.getline(s,101);
  p=strtok(s, " ");
  while(p!=NULL)
    {
      ok=1; ///pt fiecare cuvant in parte
      strcpy(cuv,p);
      for(int i=0; i<strlen(cuv); i++)
        { if(strchr("aeiou", cuv[i])==0)
          ok=0;
        }
      cout<<endl<<cuv<<" "<<ok<<endl;
      if(ok==1)
      {
        strcat(s1, cuv);
        strcat(s1, " ");
       
      }
        strcat(s1, cuv);
        strcat(s1, " ");
      
      p=strtok(NULL, " ");
    }
  strcpy(s,s1);
  cout<<s;
  return 0;
}
/*********************************************************/
SIII ex 3.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   // ifstream cin("bac.txt");

   int n, a[10001]={}, v[10001]={},x,y,k=0;
  cin>>n>>x;
  a[x]=1; ///a[x] = vector de aparitii
  v[x]=x; /// v[x]= valoarea elem curent/anterior din sir
  for(int i=2;i<=n;i++)
  {
      cin>>y;
      a[y]=1;
      v[y]=y;
      for(int j=x;j<y;j++)
        {
          v[j]=x;
        }
    x=y;
  }
  while(cin>>x>>y)
    {
      if(v[x]==v[y] && a[x]==0 && a[y]==0)
        k++;
    }
  cout<<k;
}


/*
Construim vectorul de aparitii a[] pentru sirul din fisier.
Fie x si y doua valori consecutive din sirul preluat din fisier.
Vectorul v reprezinta un sir al vecinatatilor din stanga corespunzatoare fiecarui element din intervalul [x,y)
De exemplu daca avem x=4 si y=8 atunci pentru fiecare pozitie poz din [4,8) vom avea v[poz]=x

Pentru un interval citit [x,y] testam validitatea acestuia folosind urmatoarea expresie logica:
v[x]==v[y] && a[x]==0 && a[y]==0

La final afisam numarul de intervale valide.

*/
