SII.2
  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
/**
struct Cuvant{
    char s[501];
    int poz,viz=0;
}C[501],cuv;
*/
char C[501][501];

int main()
{
    int ind=0,lmax=0;
    char a[501],*p,cuv[501];
  //  ifstream cin ("bac.txt");
    cin.getline(a,500);
    p=strtok(a," ");
    while(p!=NULL){
        ind++;
        if(lmax<strlen(p)){
            lmax=strlen(p);
        }
       // strcpy(C[ind].s,p);
       // C[ind].poz=ind;
        strcpy(C[ind],p);
        p=strtok(NULL," ");
    }
    ///ind= nr de cuvinte
    for(int lung=1;lung<=lmax;lung++){
        int st=1,dr=ind;
        while(st<dr){ /// tehnica Two Pointers
            while(st<=ind &&strlen(C[st])!=lung){
                st++;
            }
            if(st>ind) break;
             while(dr>0 &&strlen(C[dr])!=lung){
                dr--;
            }
            if(dr==0) break;
            if(st<dr){
                strcpy(cuv,C[st]);
                strcpy(C[st],C[dr]);
                strcpy(C[dr],cuv);
                st++;
                dr--;
            }
        }
    }
    for(int i=1;i<=ind;i++){
      //  cout<<C[i].s<<"\t"<<C[i].poz<<"\n";
      cout<<C[i]<<" ";
    }
    return 0;
}
