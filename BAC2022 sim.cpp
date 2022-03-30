///SII ex 3
ok=0;
for(j=1;j<14;j++)
  if((a[0][j]==a[2][j] && a[1][j-1]==a[1][j+1] && a[0][j]==a[1][j+1])) ok=1;


///SIII ex 1
#include <fstream>
#include <iostream>
using namespace std;
void rest(int x,int y,int n,int &k){
     for(int i=1; i<=n; i++){
        if(i%y==2 && i%x==2){
            k=i;
        }
    }
}

void restM(int x,int y,int n,int &k){
    k=0;
    for(int i=1; i<=n; i++){
        if(i%y==2 && i%x==2){
            k=i;
        }
    }

}
int main(){
  int n,x,y,k;
  n=3000,x=10,y=101;
  restM(x,y,n,k); ///apelul functiei
  cout<<k;
}

          

  ///  	(づ｡◕‿‿◕｡)づ|l)/

///SIII ex 2
#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
  int ok=0;
  char s[250],x[50],*p,prenume[50],nume[50];
  cin.getline(s,250);
  cin.getline(x,50);
  p=strtok(s,"; ");
  strcpy(prenume,p);
  p=strtok(NULL," ;");
  strcpy(nume,p);
  while(p!=NULL){
      if(strcmp(x,prenume)==0){
         ok=1;
         cout<<nume<<" ";
      }
      p=strtok(NULL,"; ");
      strcpy(prenume,p);
      p=strtok(NULL," ;");
      strcpy(nume,p);
  }
}



  ///  	(づ｡◕‿‿◕｡)づ|l)/

