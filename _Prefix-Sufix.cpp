#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 char s[100][21],ps[21], *p;
int n, ok=1,cnt_ps,cnt_s;
   cin>>n;
  for(int i=0; i<=n-1; i++)
    {
      cin.getline(s[i],21);
    }
  cin.getline(ps, 21);
  for( int i=0; i<=n-1; i++)
      { ok=1;
        p=strstr(s[i],ps);
        if(!(p!=NULL && strcmp(s[i],p)==0))
        {
          ok=0;//ps nu este prefix
        }
        cnt_ps=strlen(ps);
        cnt_s=strlen(s[i]);
        int k=cnt_s-1; ///contor pentru sirul s[i]
        for(int j=cnt_ps-1;j>=0;j--) ///contor pentru ps
          {
            if(ps[j]!=s[i][k]){
              ok=0;
            }
            k--;
          }
        if(ok==1){
         // cout<<s[i]<<endl;
        }
        cout<<s[i]<<" "<<ok<<endl;
        getchar();
      }
}


/*

Avem un mr nat n <=100 si n cuvinte formate din lit
mici max 20 de caractere, fiecare cuvant pe o linie noua.
Pe ultima linie se gaseste un cuvant ps.
Afisati cuvintele care au prefixul si sufixul ps.
Daca nu exista afisati -1.

10
ana
si
adela
au
fost
la
atletism
a
fost
frumos
a

ana
adela
a
*/
