SII. 3
  #include <iostream>
#include<cstring>
using namespace std;

int main() {
    char tL[21]={}, tI[21],pN[2];
    int i,poz=0;
    cin>>tI>>pN;
    for( i=0;i<strlen(tI);i++)
    {
        if(tI[i]==')')
        {
        poz=i;
        break;
        }
    }
    if(strlen(pN)!=0)
     {
         strcpy(tL+1,tI+poz+1);
         tL[0]='0';
         
     } else {
         strcpy(tL,tI+poz+1);
     }
     cout<<tL;
    return 0;
}


SIII. 3
  #include <iostream>

using namespace std;
int main()
{
  unsigned int n,p=0;
  cin>>n;
  for(int i=13;i<=n;i+=13)
  {
    int x=i;
    while(x%13==0)
    {
        p++;
        x/=13;
    }
  }
  cout<<p;

    return 0;
}

/* Algoritmul este eficient dpdv al memoriei,
 deoarece am folosit 4 variabile simple.
Algoritmul este eficient dpdv al memoriei,deoarece
are o complexitate O(n), unde n este dat in enunt.
Algoritmul parcurge acei termeni din produsul factorialului
care sunt multipli de 13. Pentru un astfel de multiplu 
se calculeaza de cate ori se imparte la 13 si se aduna la
solutia finala p.
*/



