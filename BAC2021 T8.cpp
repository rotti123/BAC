SIII ex 1.
  #include <iostream>
#include <fstream>
using namespace std;
 void nrfp(int n, int &m){
      m=0;
      int nrm=0;
     for(int i=2;i<=n;i++)
     {
         int x=i,d=2,nr=0;// nr=nr factori primi ai lui x
         while(x!=1)
         {
            int e=0;
            while(x%d==0)
            {
                x/=d;
                e++;
            }
            if(e>0)
                nr++;
            d++;
         }
         if(nr>=nrm)
            {
                nrm=nr;// am actulizat nr maxim de factori primi
                m=i;
            }
     }

 }

int main()
{ int n,m;
 n=100;
 nrfp(n,m);
 cout<<m;
    return 0;
}
