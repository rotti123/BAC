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

Pr.5 /107
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char s[81];
  int i=0;
  cin.getline(s,81);
  char *p=strtok(s," ");
  while (p!=NULL) {
    cout << p << " ";
    p=strtok(NULL," ");
  }
  return 0;
}

Pr. 6/107


#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char a[251],b[251],c[505]={};
  cin >> a >> b;
  int i=0,j=0,k=0;
  while(i<strlen(a)&&j<strlen(b)){
    if(a[i]<b[j]){
        c[k]=a[i];
        k++;
        i++;
    }
    else if(b[j]<a[i]){
        c[k]=b[j];
        k++;
        j++;
    }
    else{
        c[k]=a[i];
        k++;
        i++;
        c[k]=b[j];
        k++;
        j++;
    }
  }

  if(i<strlen(a)){
    for(int x=i;x<strlen(a);x++){
        c[k]=a[x];
        k++;
    }
  }

  if(j<strlen(b)){
    for(int x=j;x<strlen(b);x++){
        c[k]=b[x];
        k++;
    }
  }

  cout << c;
  return 0;
}

/*
ampstz
bfgostx
*/

Pr. 9/108
#include <iostream>
#include <cstring>
using namespace std;
int vocale(char s[]){
int k=0;
for(int i=0 ; i<strlen(s); i++){
    if(strchr("aeiou",s[i])){
        k++;
    }
}
return k;
}
int main(){
  char s[200];
  cin.getline(s,200);
  char *p=strtok(s," ");
  while(p!=NULL){
    if(vocale(p)<=3){
        cout<<p<<endl;
    }
    p=strtok(NULL," ");
  }
  return 0;
}



Pr. 10/108 (de completat)..

#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char s[200],t[50];
  cin.getline(s,200);
  for(int i=0;i<strlen(s);i++){
    if(strchr("aeiou",s[i])!=NULL){
        strcpy(t,s+i+1);
        strcpy(s+i,t);i--;
    }
    ....
  }
  return 0;
}



