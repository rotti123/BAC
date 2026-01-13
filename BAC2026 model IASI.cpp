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
