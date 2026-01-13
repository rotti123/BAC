SIII.1
  #include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
    void AproapePrim(int a, int b ,int &c, int &d)
    {
        int x,p,e,k=0,ok=0;
        c=0;    d=0;
        for(int i=a;i<=b;i++){
            x=i;
            p=2; ///divizor/factor prim
            ok=1;
            k=0;
            while(x!=1){
                e=0; /// p^e
               if(x%p==0){
                   k++; ///cati factori primi am
                   while(x%p==0){
                       x=x/p;
                       e++;
                   }
                   if(e>1){
                        x=1;
                        ok=0;
                   }
                }
                p++;
            }
            if(ok==1 && k==2){
               if(c==0) c=i;
               d=i;
            }
        }
    }
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    AproapePrim(a,b,c,d);
    cout<<c<<" "<<d;
    return 0;
}

SIII.2
#include <iostream>
#include <cstring>
using namespace std;

int anagrame(char a[101], char b[101])
{
    int va[26]={},vb[26]={};
    int cod;
    for(int i=0;i<strlen(a);i++){
        cod=a[i]-'a';
        va[cod]++;
    }
    for(int i=0;i<strlen(b);i++){
        cod=b[i]-'a';
        vb[cod]++;
    }
    for(int i=0;i<=25;i++){
        if(va[i] != vb[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[101],c[21],*p,t[101],mat[101][101];
    int k=0,ind=0;
    cin.getline(s,101);
    cin>>c;
    p=strtok(s," ");
    while(p){
        if(anagrame(p,c)){
            k++;
        }
        else{
        strcpy(mat[ind],p);
        ind++;
        }
        p=strtok(NULL," ");
    }
    if(k==0){
        cout<<"nu exista";
    }else{
    for(int i=0;i<=ind-1;i++){
        cout<<mat[i]<<' ';
    }
    }
    return 0;
}

