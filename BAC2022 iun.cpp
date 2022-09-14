
II.3
   #include <iostream>
#include <cstring>

using namespace std;

int main() {

char s_CH[51], id_CH[55]={}, *p;
    char cuv[20];
  cin.getline(s_CH,50);
  p=strtok(s_CH," ");
  while(p!=NULL)
  {
    strcpy(cuv,p);
    p=strtok(NULL, " ");
  }
  strcpy(id_CH,cuv);
  strcat(id_CH,"2022");
  
cout<<id_CH;
    return 0;
}

