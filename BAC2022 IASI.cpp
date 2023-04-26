SIII ex 1
  #include <iostream>

using namespace std;

void numimp(int n, int v[], int &c){
    int x,c1,ok;
    c=0;
    for(int i=0;i<n;i++){
        x=v[i];
        ok=0;
        while(x!=0){
            c1=x%10;
            x/=10;
            if(c1%2!=0){
            ok=1;//am gasit o cifra impara;
            }
        }
        if(ok==1) c++;
    }
}

int main() {
    int n=5,v[100]={12, 8, 19, 45, 22},c;
    numimp(n,v,c);
    cout<<c;
    return 0;
}

SIII ex2 V1
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;


int main() {
  char s[11], v[101], *p, a[101][101];
  int k=0, ok=0;
  cin.getline(s,10);
  cin.getline(v,300);
  p=strtok(v, " ");
  while(p!=NULL){
    k++;
    strcpy(a[k], p);
    p=strtok(NULL, " ");
  }
  for(int i=2; i<k; i++){
    if(strcmp(s,a[i])==0){
      cout<<a[i-1]<<" "<<a[i+1]<<endl;
      ok=1;
    }
  }
  if(ok==0) cout<<"nu exista";
  return 0;
}

SIII.2 V2

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cuv[11]={},s[101]={},b[101]={},a[101]={},c[101]={},*p;
    int ok=0;
    cin.getline(cuv,10);
    cin.getline(s,100);
    p=strtok(s," "); ///primul cuvant (a)
    strcpy(a,p);
    p=strtok(NULL," "); //al doilea cuvant (b)
    if(p==NULL){
        cout<<"NU EXISTA";
        return 0;
    }
    strcpy(b,p);
    p=strtok(NULL," ");
    
    while(p!=NULL){
        strcpy(c,p);
        if(strcmp(b,cuv)==0){
            ok=1;/// am gasit un cuvant
            cout<<a<<" "<<c<<endl;
        }
        strcpy(a,b);
        strcpy(b,c);
        p=strtok(NULL," ");
    }
    
    if(ok==0){
        cout<<"NU EXISTA";
    }
    
    return 0;
}

SIII ex3
#include <iostream>

using namespace std;

struct bursa {
    int ziua1, ziua2, fluctuatie;
};

int main() {
  ifstream cin("valori.in");
    bursa minn, maxx;
    int n, last_n, x;
    cin >> x;
    cin >> last_n >> n;
    minn.ziua1 = last_n;
    minn.ziua2 = n;
    minn.fluctuatie = abs(n - last_n); ///abs(x) = |x| modul
    maxx = minn;
    last_n = n;
    while (cin >> n) {
        if(abs(n - last_n) <= minn.fluctuatie) {
            minn.ziua1 = last_n;
            minn.ziua2 = n;
            minn.fluctuatie = abs(n - last_n);
        }
        if(abs(n - last_n) >= maxx.fluctuatie) {
            maxx.ziua1 = last_n;
            maxx.ziua2 = n;
            maxx.fluctuatie = abs(n - last_n);
        }
        last_n = n;
    }
    cout << maxx.fluctuatie << ' ' << minn.fluctuatie << '\n';
    cout << maxx.ziua1 << ' ' << maxx.ziua2 << '\n';
    cout << minn.ziua1 << ' ' << minn.ziua2 << '\n';
}
/*
Complexitate O(n), n nr de elem din valoare.in
Eficient dpdv al mem deoarece are 3 var intregi simple si doua var strcuct cu 3 atribute
Comparam fluctuatia pentru fiecare pereche de zile consecutive cu fluctuatia maxima, respectiv minima.
*/
