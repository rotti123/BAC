SIII ex 1
  #include <iostream>

using namespace std;

void numimp(int n, int v[], int &c){
    int x,c1,ok;
    c=0;
    for(int i=0;i<n;i++){
        x=v[i];
        ok=0;
        while(x!=0){
            c1=x%10;
            x/=10;
            if(c1%2!=0){
            ok=1;//am gasit o cifra impara;
            }
        }
        if(ok==1) c++;
    }
}

int main() {
    int n=5,v[100]={12, 8, 19, 45, 22},c;
    numimp(n,v,c);
    cout<<c;
    return 0;
}

SIII ex2

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cuv[11]={},s[101]={},b[101]={},a[101]={},c[101]={},*p;
    int ok=0;
    cin.getline(cuv,10);
    cin.getline(s,100);
    p=strtok(s," "); ///primul cuvant (a)
    strcpy(a,p);
    p=strtok(NULL," "); //al doilea cuvant (b)
    if(p==NULL){
        cout<<"NU EXISTA";
        return 0;
    }
    strcpy(b,p);
    p=strtok(NULL," ");
    
    while(p!=NULL){
        strcpy(c,p);
        if(strcmp(b,cuv)==0){
            ok=1;/// am gasit un cuvant
            cout<<a<<" "<<c<<endl;
        }
        strcpy(a,b);
        strcpy(b,c);
        p=strtok(NULL," ");
    }
    
    if(ok==0){
        cout<<"NU EXISTA";
    }
    
    return 0;
}
