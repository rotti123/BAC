//SII ex 3
 for(i=0; i<=4; i++){
    if(a[i][0]==2020 || a[i][6]==2020){
      cout<<i<<" ";
    }
  }

//SIII ex 1
#include <iostream>
#include <fstream>

using namespace std;

void duplicare(int n,int &d){
  d=0;
  int k=0,c,p=1;
  while(n!=0){
    c=n%10;
    n=n/10;
    if(c%2==0){
      d=d+c*p;
      p=p*10;
    }
    else{
      d=d+c*p;
      p=p*10;
      d=d+c*p;
      p=p*10;
    }
  }
}
int main()
{  
  int n,d;
  cin>>n;
  duplicare(n,d);
  cout<<d;
}

///SIII ex 2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{  
 int n;
  bool oka=0,okb=0;
  char s[101],*p,a[101]={},b[101]={};
  cin>>n;
  cin.getline(s,101);
  p=strtok(s," ");
  while(p!=NULL){
    if(strlen(p)>=n){
      strcat(a,p);
      strcat(a,"\n");
      oka=1;
    }
    else{
      strcat(b,p);
      strcat(b,"\n");
      okb=1;
    }
    p=strtok(NULL," ");
  }
  if((oka==0 && okb==1) || (oka==1 && okb==0))  cout<<"nu exista";
  else  cout<<a<<b;
 return 0;
}
