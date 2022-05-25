SII ex 5
  #include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[101]={}, *p, aux[101]={}, sol[101]={};
    int ok=0;
  cin.getline(s,100);
  p=strtok(s," ");
  while(p!=NULL){
    strcpy(aux,p);
    if(strchr("0123456789", aux[0])!=NULL){
      if(ok==0){
        ok=1;
        strcpy(sol,aux);
      }
      else{
        if(aux[0]>sol[0]){
          strcpy(sol,aux);
        }
      }
    }
    p=strtok(NULL," ");
  }
  if(ok==0){
    cout<<"nu exista";
  }
  else cout<<sol;
  return 0;
}

SIII ex 3
  int echilibrat (int n){
    int c,sp=0,si=0,poz=0;
    while(n!=0){
        c=n%10;
        n/=10;
        if(poz%2==0){
          sp=sp+c;
        }
        else{
          si=si+c;
        }
      poz++;
    }
  if(sp%2==0 && si%2==1){
    return 1;
  }
  else return 0;
}

SIII ex 4.
  #include <iostream>

using namespace std;

struct pozitii { 
    int first = 0;
    int last = 0;
} v[10];

int main() {
    int maxx = 0, x, i = 1;
    while(cin >> x) {
        if(v[x].first == 0) v[x].first = i;
        v[x].last = i;
        if(v[x].last - v[x].first + 1 > maxx) maxx = v[x].last - v[x].first + 1;
        i++;
    }
    cout << maxx << endl;
    for(int j = 0; j <= 9; j++) {
        if(v[j].last - v[j].first + 1 == maxx) cout << j << ' ';
    }
}
