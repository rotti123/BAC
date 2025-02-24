SII.3
   int a[10][10],i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            a[i][5-j+1]=max(i,j)-1;
           // a[5-i+1][j]=max(i,j)-1;
        }
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<a[i][j]<<" ";
        }
    cout << endl;
    }

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
SIII. 3
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{ ifstream fin("bac.txt");
int poz=1,a,b,MAX;
fin>>a;
cout<<poz<<" ";
MAX=a;
while(fin>>b)
{ poz++;
    if(b>MAX)
    {
        MAX=b;
        cout<<poz<<" ";
    }
   else if(b==MAX && a!=b)
    cout<<poz<<" ";
   a=b;
}
    fin.close();
    return 0;
}
/** algoritmul este eficient dpdv al memoriei,deoarece am folosit
 doar 4 variabile intregi simple.
 
 algoritmul este eficient dpdv al timpului de executie, deoarece are 
 o complexitate O(n), unde n reprezinta cate nr am in fisier.
 
 retinem maximul local in variabila MAX. avem urmatoarele situtii:
 -am intalnit un nou maxim, atunci afisam poz acestuia.
 -am intalnit aceeasi val max, dar elem anterior este diferit, atunci 
 afisam poz acestuia.
 */

