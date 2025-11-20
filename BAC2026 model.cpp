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
