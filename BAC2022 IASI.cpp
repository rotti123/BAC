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
