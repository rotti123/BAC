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

