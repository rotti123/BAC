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

SIII ex 3.
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  //ifstream cin ("bac.txt");
  int a[10001]={},m, n,x,y,v[10001]={}, cnt=0;
  cin>> n>>x;
  a[x]=1; ///vector de aparitii
  v[x]=x;
  /// v[x] = valoarea curenta/anterioara din interval
  for(int i = 2; i <= n; i++)
    {
      cin >> y;
      a[y]=1;
      v[y]=y;
      for(int j=x+1;j<=y-1;j++){
        v[j]=x;
      }
      x=y;
    }
  while (cin >> x >> y) { ///for(int i=m;i>=1;i--)
    if (v[x] == v[y] && a[x] == 0 && a[y] == 0)
      cnt++;
  }
  cout << cnt;

return 0;
}

