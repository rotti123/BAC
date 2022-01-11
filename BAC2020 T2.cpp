///SIII ex1
#include <iostream>

using namespace std;
void fii(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<"("<<i<<' '<<n/i<<") ";
        }
    }    
}

int main() {
    int n;
    cin >>n;
    fii(n);
    return 0;
}

///SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char s[101],a[101]={};
    cin.getline(s,101);
    char *p;
    p=strtok(s," ");
    while(p!=NULL){
        if(p[0]!='-'){
            strcat(a,p);
        }
        strcat(a," ");
        p=strtok(NULL," ");
    }
   strcpy(s,a);
   cout<<s;
    
   
    return 0;
}
