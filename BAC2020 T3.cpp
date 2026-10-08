///SII ex 3
V0 partial
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char S[100];
    int stg=0, drp=0;
    cin.getline(S,20);
    for(int i=0;i<strlen(S);i++)
    {
        if(S[i]=='A')
        {
            if(i==0)
            {
                if(S[i+1]=='I'){
                       strcpy(S,S+1);
                       drp=1;
                   }
            }
            else{
                if(S[i+1]=='I'){
                    if(drp==0)strcpy(S+i,S+i+1);
                    drp=1;
                    stg=0;
                }
                else if(S[i-1]=='I'){
                    if(stg==0)strcpy(S+i,S+i+1);
                    stg=1;
                    drp=0;
                }
            }
        }
        else{
            stg=0;
            drp=0;
        }

    }
    cout<<S;
    return 0;
}

V1

#include <iostream>
#include <fstream>
using namespace std;

int main() {

     int p=1;
     char s[21];
     cin>>s;
     if((s[0]== 'A' && s[1]!= 'I') || s[0]!= 'A')
     {
         cout<<s[0];
     }
     while(s[p] != '\0')
     {
        if((s[p]== 'A' && (s[p+1]!= 'I' && s[p-1]!= 'I'))
           || s[p]!= 'A')
            cout<<s[p];
        p++;
     }
}
V2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
  char s[21];
  int p=0;
  cin.getline(s,21);
  if(s[0]=='A'){
    if(s[1]!='I')
        cout<<s[0];
  }
  p++;
  while(s[p]!=NULL)
    {
      if(s[p]=='A')
      {
        if(!(s[p-1]=='I' || s[p+1]=='I'))
        {
          cout<<"A";
        }

      }
      else
      {
        cout<<s[p];
      }
      p++;
    }
}


///SIII ex 1:
V1
#include <iostream>
using namespace std;
int Factori(int n, int m)
{
    int d=2,cnt=0;
    while(n>1&&m>1)
    {
        int pn,pm;
        pn=pm=0;
        while(n%d==0)
        {
            n=n/d;
            pn++;
        }
        while(m%d==0)
        {
            m=m/d;
            pm++;
        }
        if(pm*pn>0)
            cnt++;
        d++;
    }
    return cnt;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<Factori(n,m);
    
    return 0;
}
V2


#include <iostream>

using namespace std;

int factori(int n, int m){
    int c=0;
    for(int d=2;d<=n;d++){
        if(n%d==0 && m%d==0){
            c++;
            while(n%d==0){
                n=n/d;
            }
            while(m%d==0){
                m=m/d;
            }
        }else{
            while(n%d==0){
                n=n/d;
            }
            while(m%d==0){
                m=m/d;
            }
        }
    }
    return c;
}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<factori(n,m);
}

///SIII ex2
#include <iostream>

using namespace std;

int main() {
    int n,a[21][21];
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=abs(n-(i+j)+1);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}


///SIII ex 3
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream cin("bac.in");
    int n,nr1=0,nr2=0,nr=0;
    while(cin>>n)
    {
        nr++;
        if(n<0)
        {
            if(nr1==0)
                nr1=nr;
            nr2=nr;
        }
    }
 int s1=0,s2=0;
s2=nr2;
s1=k-nr1+1;
    if(s1>s2)
        cout<<s1;
    else cout<<s2;// are nr 
    cin.close();
    return 0;
}

/*
Alg este eficient dpdv al timpului de executie deoarece are o complexitate O(n).
Este eficeint dpdv al memoriei deoarece foloseste doar 6 variabile simple. 
Algoritmul contorizeaza cate numere sunt citite, iar dupa verifica daca numarul citit este negativ.
In caz afirmativ se retine pozitia primului si a ultimului numar gasit.
Compara cate numere se afla de la primul numar negativ pana la ultimul citit si 
de la primul numar citit pana la ultimul numar negativ 
La sfarsit se afiseaza numarul cel mai mare dintre cele doua valori comparate anterior.*/

https://pastebin.com/DqzmX88h
