SIII.ex 2
      int ok=0;
    char *p;
    char s[101];
    int sum=0;

    cin.getline(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        int v[6]= {};
        for(int i=0; i<strlen(p); i++)
        {
            if(p[i]=='a')
            {
                v[0]=1;
            }
            if(p[i]=='e')
            {
                v[1]=1;
            }
            if(p[i]=='i')
            {
                v[2]=1;
            }
            if(p[i]=='o')
            {
                v[3]=1;
            }
            if(p[i]=='u')
            {
                v[4]=1;
            }
        }
        for(int i=0; i<=4; i++)
        {
            sum=sum+v[i];
        }
        if(sum==1)
        {
            cout << p << endl;
            ok=1;
        }
        sum=0;
        p=strtok(NULL," "); //urmatorul cuvant!
    }

        if(ok==0)
        {
            cout << "NU EXISTA";
        }

SIII ex 1
  #include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

void divizori (int a,int b,int k, int &nr){
  nr=0;
  for(int i=a; i<=b; i++){
    if(i%k==0 && i%10==k){
      nr++;
    }
  }
}
int main() {
  ifstream cin("bac.txt");
  int a, b, k, nr;
  cin>>a>>b>>k;
  divizori(a,b,k,nr);
  cout<<nr;
}
 
 SIII ex 2
   #include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  ifstream cin("bac.txt");
  char s[101], *p, voc[6]="aeiou";
  int k=0, ok=0;
  cin.getline(s,100);
  p=strtok (s," "); //am gasit primul cuvant
  while (p!=NULL){
  k=0;
    for (int i=0; i<=4; i++){
      if (strchr(p,voc[i])!= NULL){
        k++;
      }
    }
    if(k==1){
       cout<<p<<"\n";
      ok=1;
      }
    p=strtok (NULL," "); // preluam urm cuvant
  }
  if (ok==0)
    cout<<"nu exista";
}
 
 SIII Ex. 3
   #include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
int v[10];

int main() {
  ifstream cin("bac.txt");
  int n, c;
  while (cin >> n){
    while (n != 0 ){
      c = n % 10;
      n /= 10;
      v[c]++;
    }
  }
  for (c = 9; c >= 0; c--){
    while (v[c] != 0){ ///for(int i=1;i<=v[c];i++)
      cout << c;
      v[c]--; ///asta nu se scrie la 'for'
    }
  }  
}
 /*
Algoritmul este eficient dpdv al timpului de exec deoarece are
o complexitate liniara O(n), unde n repr nr de elem din fisier
Programul face urmatorii pasi:
  - pentru fiecare numar x din fisier 
    retine numarul de aparitii a tuturor cifrelor acestuia
   intr-un vector de frecventa
  - parcurgem toate cifrele de la 9 la 0 si afisam cifra curenta
    conform numarului de aparitii din vectorul de frecventa
*/
 
