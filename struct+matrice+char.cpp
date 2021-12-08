###############################################
Model 2022
SII ex2
struct zbor{
    int cod, durata;
    struct data{
        int ora, minut;
    }aterizare;
}z;

SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101],*p;
    int k=0,ok=1;
    cin.getline(s,100);
    p=strtok(s," ");
    while(p!=NULL){
        if(p[0]>='0' && p[0]<='9'){
            if(k==0){
               k=strlen(p);
            }
            else{
                if(strlen(p)!=k){
                    ok=0;
                }
            }
        }
        p=strtok(NULL," ");
    }
    if(ok==0){
        cout<<"NU";
    }
    else{
        cout<<k;
    }
    return 0;
}

###############################################
BAC2019 sept
SIII ex 2
#include <iostream>

using namespace std;

int main() {
    int n,a[21][21],m=0,ok=1,i,j;
    cin >> n ;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    cin>>a[i][j];
            }
    }
    while((m<=n)&&(ok==1)){
            m++;
          for(i=1;i<=m;i++){
                  for(j=1;j<=m;j++){
                          if(a[1][1]!=a[i][j]){
                                  ok=0;
                          }
                  }
          }

    }
    if(ok==0){
           cout<<m-1<<"*";
    }
    else{
            cout<<n;
    }
    return 0;
}

###############################################
SI BAC2019 iunie
3b
SII
3.
fig.raza=1;
fig.centru.x=0;
fig.centru.y=0;

SIII ex2

#include <iostream>

using namespace std;

int main() {
    int n,a[21][21],m,ok=1,i,j;
    cin >> m>>n ;
    for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                    cin>>a[i][j];
            }
    }
     for(int j=1; j<=n/2; j++){
        for(int i=1; i<=m; i++){
            if(a[i][j]!=a[i][n-j+1]){
                ok=0;
            }
        }
     }
    if(ok==0){
           cout<<"NU";
    }
    else{
            cout<<"DA";
    }
    return 0;
}
###################################################
BAC 2019 SS
SII ex 2

#include <iostream>

using namespace std;
struct tdata
{
    int zi,luna;
} d;
struct eveniment
{
    int nr;
    struct tdata dev;
} e;

int main()
{
    cin>>d.zi>>d.luna;
    cin>>e.dev.zi>>e.dev.luna;
    if(d.luna<e.dev.luna || (d.luna==e.dev.luna && d.zi<e.dev.zi)){
        cout<<"Anterior";
    }
    else{
        cout<<"Posterior";
    }
       return 0;
}


SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101],*p;
    int n,ok=0;
    cin>>n;
    cin.get();
    cin.getline(s,100);
    //cout<<s;
    p=strtok(s," ");
    while(p!=NULL){
        if(strlen(p)==n){
            cout<<p<<endl;
            ok=1;
        }
        p=strtok(NULL," ");
    }
    if(ok==0){
        cout<<"NU";
    }

    return 0;
}
