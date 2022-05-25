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
