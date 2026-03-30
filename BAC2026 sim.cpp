#include    <iostream>
#include<cstring>
#include<cmath>
using namespace std;

int divizor(int a,int b){
    while(a!=b){
        if(a<b){
            b=b-a;
        }
        else a=a-b;
    }
    return b;
}
int cmmmc(int a,int b){
    return (a*b/divizor(a,b));
}
int depozit(int x,int y,int z){
    return cmmmc(x,cmmmc(y,z));
}
int codificare(char a, int x){

}
int main()
{
    char v[101],*p,cuv[101]=" ",aux[101]={},rez[101]={};
    int a[5]={},c=1,cod;
    for(int i=1;i<=3;i++){
        cin>>a[i];
    }
    cin.get();
    cin.getline(v,101);
    p=strtok(v," ");
    while(p!=NULL){
        strcpy(aux,p);
        for(int i=0;aux[i]!='\0';i++){
            if(aux[i]+a[c]<='Z'){
                aux[i]=aux[i]+a[c];
            }else{
                cod=aux[i]+a[c]-'Z'-1;
                aux[i]='A'+cod;
            }
            c++;
            if(c>3){
                c=1;
            }
        }
        strcat(rez,aux);
        cout<<rez<<'\n';
        p=strtok(NULL," ");
    }
    return 0;
}
