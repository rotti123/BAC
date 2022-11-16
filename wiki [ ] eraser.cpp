#include <iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main() 
{
  fstream f("bac.txt", ios::in);
  fstream g("bac.out",ios::out);
  char s[100000], *p;
  while(f.getline(s, 100000)){
    char a[100000]={};
    int k=0,ok=1;
    for( int i=0; i<strlen(s); i++){
      if(ok==1)
      {
        if(s[i]=='['){
          ok=0;
          continue;
        }
       a[k]=s[i];
        k++;
      }
      else{
        if(s[i]==']'){
          ok=1;
        }
      }
      
    }
      g<<a<<'\n';
    }
}
