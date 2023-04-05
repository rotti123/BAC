SIII 2.
  #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
  //  ifstream f("bacul.txt");
   char s[303],*p,aux[303]={};
  cin.getline(s,100);
  p=strtok(s," ");
  while(p!=NULL){
     if(strchr(p,'.')==NULL){
        strcat(aux,p);
     }
     else{
        if(p[0]=='F'){
           strcat(aux,"fam.");
        }
       if(p[0]=='S'){
           strcat(aux,"spe.");
        }
       if(p[0]=='G'){
           strcat(aux,"gen.");
        }
     }
      p=strtok(NULL," ");
      if(p!=NULL){
       strcat(aux," ");
      }
  }
  strcpy(s,aux);
  cout<<s;
  return 0;
}
