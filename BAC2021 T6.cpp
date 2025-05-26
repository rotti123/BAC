//SIII ex 1
#include <iostream>
#include <cstring>
using namespace std;

void numar(int n,int c,int &m){
    int p=1,ok=0,cif;
    m=0;
    while(n!=0){
        cif=n%10;
        n/=10;
        if(cif!=c){
           ok=1;
           m=m+cif*p;
           p*=10;
        } 
    
    }
    if(ok==0) m=-1;
    
}

int main() {
    int n,c,m;
    cin >> n >> c;
    numar(n,c,m);
    cout<<m;
    return 0;
}

SIII ex 3 [pentru un nr variabil de elem negative]
/*
15 21 -61 9 870 -23 11 5 8 -81  5 14
pre=2     lun=2     lun=3
          pre=2     pre=3       lun=2
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");

    int x,maxim=0,lun=0,pre=0;
    while(f>>x)
    {
        if(x>0)
            lun++;
        else
            {
                if(pre+lun+1>maxim)
                    maxim=pre+lun+1;
                pre=lun;
                lun=0;
            }
    }

    if(pre+lun+1>maxim)
        maxim=pre+lun+1;
    cout<<maxim;
    return 0;
}
SIII ex 3
    
    #include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream cin("bac.txt");
  int x, a, b, c, k=0, kn=0;
  /// k= contorul pentru elem curent din sir
  /// kn= contor numere negative
  //a= poz primului element negativ din sir
  //b= poz II   -||-
  //c= poz III   -||-
  while(cin>>x){
    k++;
    if(x<0){
      kn++;
      if(kn==1){
        a=k;
      }
      if(kn==2){
        b=k;
      }
      if(kn==3){
        c=k;
      }
    }
  }
  int l1, l2, l3;
  l1=b-1;
  l2=(c-1)-(a+1)+1;
  l3=k-(b+1)+1;
  cout<<max(l1,max(l2,l3));
  return 0;
}

/*
Algoritmul citeste din fisier sirul dat, verificand daca  numarul citit este negativ. In acest caz retinem pozitia acestuia. Presupunem ca avem numerele negative pe poz a, b si c, si lungimea sirului este k. Atunci vom alege lungimea maxima dintre urmatoarele secvente: 
L1=b-1
L2=(c-1) -(a+1)+1
L3=k-(b+1)+1



15 21 -61 9 870 -23 11 5 8 -81  5 14

1  2   3  4  5   6  7  8 9  10 11 12
       a         b          c

S1  1..5  L1=b-1
S2  4..9  L2=(c-1) -(a+1)+1
S3  7..12 L3=k-(b+1)+1

cout<<max(l1,max(l2,l3))

*/


Completare:
#include <iostream>

using namespace std;

void numar(int n, int c, int &m)
{
    m=0;
    if(n==0 && c!=0){
    m=0;
    return;
    }
    int p=1, ok=0;
    while(n!=0)
    {
        if(n%10!=c)
          {
              m=n%10*p+m;
              p=p*10;
              ok=1;
          }
          n=n/10;


    }
    if(ok==0)
        m=-1;


}
int main()
{
    int x,a=0,b=0,c=0,poz=0,l=0,lmax=0;
    while(cin >> x)
    {
        poz++;
        if(x<0)
        {
            if(a==0)
            a=poz;
            else
                if(b==0)
            {
                b=poz;
                l=b-1;
                lmax=l;
            }
            else
            if(c==0)
               {
                  c=poz;
                  l=c-a-1;
                  if(l>lmax)
                    lmax=l;
               }
            else
              {

                   a=b;
                   b=c;
                   c=poz;
                   l=c-a-1;
                  if(l>lmax)
                    lmax=l;
              }


        }

    }
    l=poz-b;
    if(l>lmax)
        lmax=l;
    cout << lmax;
  /*  int a[21][21],n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){

            if(i<j){
                a[i][j]=j-i;
            }
            else{
                a[i][j]=i-j;
            }

        }

    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
                cout<<a[i][j]<<' ';}
        cout<<"\n";
    }*/
    return 0;
}

