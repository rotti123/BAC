citeşte a,b,k
 (numere naturale, 1≤a≤b, k>1)
 pm<-0; y<-0; 
┌pentru i<-b,a,-1 executa
│ x<-i; p<-0
│┌cât timp x%k=0 execută
││ x<-[x/k]; p<-p+1
│└■
│┌dacă p≠0 și (p<pm sau pm=0)atunci
││ pm<-p; y<-i
│└■
└■
 scrie y

SII ex2
struct eveniment{
    struct {
        int zi,luna;
    } data;
    int id;
} e;

SII ex 3
int main() {
    int i,j,a[6][6];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            a[i][j]=j+i*2;
          //  cout<<a[i][j]<<" ";
        }
      //  cout<<endl;
    }
    return 0;
}

SIII ex 1
#include <iostream>

using namespace std;

void inserare(int &n){
    int x=0,c1,c2,d,p=1;
    while(n>=10){
        c1=n%10;
        c2=n/10%10;
        d=abs(c1-c2);
        x=x+c1*p;
        p=p*10;
        x=x+d*p;
        p=p*10;
        n=n/10;
    }
   x=x+n*p;
   n=x;
}

int main() {
    int n=273;
    inserare(n);
    cout<<n;
    return 0;
}

SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;
char den[4][10]={"COLEGIUL", "LICEUL", "NATIONAL", "TEORETIC"};
char denp[4][10]={"COLEG.", "LIC.", "NAT.", "TEO."};
int main() {
    char s[256],*p,a[500]={};
    int ok=0;
    cin.getline(s,256);
    p=strtok(s," ");
    while(p!=NULL){
            ok=0;
        for(int i=0;i<=3;i++){
            if(strcmp(p,denp[i])==0){
                strcat(a,den[i]);
                ok=1;
            }
        }
        if(ok==0){
            strcat(a,p);
        }
        strcat(a," ");
        p=strtok(NULL," ");
    }
    cout<<a;
    return 0;
}
