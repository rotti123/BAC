Siruri de caractere
Pr 1/106
  
  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char s[21];
int main(){
  int v=0,c=0;
  cin.getline (s, 21);
  // andreea
  // 0123456
  for(int i=0;i<=strlen(s)-1;i++){
    if(strchr("aeiou",s[i])!=NULL){
      v++;
    }
    else{
      c++;
    }
  }
  if(v==c){
    cout << "DA";
  }
  else{
    cout << "NU";
  }
}
