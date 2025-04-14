///SII ex 3
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
        }cout<<endl;
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
Compara cate numere se afla de la primul numar negativ pana la ultimul citit si de la primul numar citit pana la ultimul numar negativ 
La sfarsit se afiseaza numarul cel mai mare dintre cele doua valori comparate anterior.*/

https://pastebin.com/DqzmX88h
