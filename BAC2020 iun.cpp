#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
/* SIII 1. (BAC2020 iun)
int suma(int a, int b){
  int s=1;
for(int d=2; d<=min(a,b); d++)
  if(a%d==0 && b%d==0){
    s+=d;
    return 1;
    }
return 0;
}
*/
///SIII 2.
int main(){
  char s[101]={},*p,aux[101]={}, sol[101]={};
  cin.getline(s,100);
  p=strtok(s," "); ///preluam primul cuvant din s
  while(p!=NULL){
    strcpy(aux,p);
    if(strlen(aux)>=3){
      char lit[101]={};
      lit[0]=aux[0];
      strcpy(aux,aux+1);
      strcat(aux,lit);
      strcat(sol,aux);
      strcat(sol," ");
    }
    else{
      strcat(sol,aux);
      strcat(sol," ");
    }
    p=strtok(NULL," ");
  }
  sol[strlen(sol)-1]='\0';
  cout<<sol;
  return 0;
}


Bonus:

#include <iostream>
#include <cstring>

using namespace std;

int main() { //// italia -> aitalia -> aitali [ultimul caracter devine primul]
             ////           0123456
    char s[101] = {}, *p, nou[101] = {}, cuv[101] = {};
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL) {
        char aux[101] = {};
        strcpy(cuv, p); 
        if(strlen(cuv) >= 3) {
            strcpy(aux, "");
            aux[0] = cuv[strlen(cuv) - 1];
            strcat(aux, cuv);
            aux[strlen(cuv)] = '\0';
            strcpy(cuv, aux);
        }
        strcat(nou, cuv);
        strcat(nou, " ");
        p = strtok(NULL, " ");
    }
    cout << nou;
    return 0;
}

///SIII ex 3
+#include <iostream>
#include <cstring>

using namespace std; /// 1 4 3 3 3 3 3 4 1

int main() { 
   unsigned int x,v[1001]={},k=0;
  while(cin >> x){
    v[x]++;
  }
  for(int i=1;i<=1000;i++){
    if(v[i]%2==1){
      k++;
    }
  }
  if(k>1){
    cout<<"NU";
  }
  else{
    cout<<"DA";
  }
    return 0;
}
