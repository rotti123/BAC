Siruri de caractere
Pr 1/106
  
  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char s[21];
int main(){
  int v=0,c=0;
  cin.getline (s, 21);
  // andreea
  // 0123456
  for(int i=0;i<=strlen(s)-1;i++){
    if(strchr("aeiou",s[i])!=NULL){
      v++;
    }
    else{
      c++;
    }
  }
  if(v==c){
    cout << "DA";
  }
  else{
    cout << "NU";
  }
}

Pr 2/106
  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char s[101],x[101];
int main(){
  cin.getline (s,101); ///textul de unde preiau caracterele
  cin.getline (x,101); ///textul unde caut caracterele
  int ok=1;
  for(int i=0;i<=strlen(s)-1;i++){

    if(strchr(x,s[i])==NULL){ ///caut s[i] in x
      ok=0; //daca nu exista s[i] modific ok=0
    }
  }
  if(ok) cout<<"DA";
  else cout<<"NU";
}

Pr 3/107 partiala (fara intersch cifre)
  #include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
char s[101],x[101];
int main(){
  float x=1234.76543,sol;
  cin>>x;
  x=sqrt(x);
  sol=floor(x*100)/100;
  cout<<sol;
}

