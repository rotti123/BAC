SIII 
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
  char s[101];
  char cuv[11];
  cin.getline(cuv, 11);
  cin.getline(s, 101);

  int count = 0;
  char m[101][101];

  char *ptr;
  ptr = strtok(s, " ");


  while(ptr!=NULL){

    strcpy(m[++count], ptr);

    ptr = strtok(NULL, " ");
  }

bool ok = false;

  for(int i = 2; i<count; i++){

    if(strcmp(m[i], cuv) == 0 ){
      ok =1;

      cout<<m[i-1]<<" "<<m[i+1]<<endl;
    }
  }

  if(!ok){
    cout<<"NU EXISTA"<<"\n";
  }


 return 0;
}
