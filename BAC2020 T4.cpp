///SII
citeşte n (număr natural)
┌repetă
│ c1<-n%10; n<-[n/10]; c2<-n%10
│┌dacă c1>c2 atunci
││ c2<-c1; c1<-n%10
│└■
|  dacă c1<c2 atunci 
│   repetă
│     scrie c1
│     c2<-[c2/2]
│   până când c1>=c2
|  sfârșit dacă
└până când n≤9

///p.NrVarfuri p.Muchie p.Unghi.FataMuchie p.Unghi.FataFata

struct poliedru{
    int NrVarfuri;
    float Muchie;
    struct{
        float FataMuchie;
        float FataFata;
    }Unghi;
 }p;

///SIII ex1
#include <iostream>
#include <fstream>
using namespace std;
void generatoare(int n){
    int a,b;
    for(a=2;a<=n/2;a+=2){
        for(b=1;b<=n/a;b++){
            if(a*b+a/b==n){
                cout<<a<<"-"<<b<<" ";
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    generatoare(n);
}
