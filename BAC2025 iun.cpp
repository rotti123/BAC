SIII.1
  #include <iostream>

using namespace std;

int main()
{
    int n,x,y,S=0,u,aux,c,minn;
    cin>>n>>x>>y;
    u=n%10;
    for(int nr=x;nr<=y;nr++){
        aux=nr;
        minn=10000;
        while(aux>0){
            c=aux%10;
            aux=aux/10;
            if(c<minn){
                minn=c;
            }
        }
        if(minn>=u){
            S=S+nr;
        }
    }
    cout<<S;
    return 0;
}
SIII.2
  #include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[201],cuv[30][15]={},*p,str[201]={},sol[201]= {};
    unsigned int l,ok=0,i=0,m[30];
    cin.getline(s,201);
    p=strtok(s," ");
    while(p)
    {
        l=strlen(p);
        if(l%2==0)
            ok=1;
        m[i]=l;
        strcpy(cuv[i],p);
        i++;
        p=strtok(NULL," ");
    }
    if(ok==0)
        cout<<"nu exista";
    else
    {
        for(int j=0; j<=i; j++)
        {
            if(m[j]%2==0)
            {
                strcpy(str,cuv[j]+m[j]/2);
                strcat(sol,str);
               /* for(int t=m[j]/2; t<=m[j]; t++)
                {
                    //strcpy(cuv[j],cuv[j]+m[i]/2);
                    str[0]=cuv[j][t];
                    str[1]='\0';
                    strcat(sol,str);
                }
                */
                strcpy(str,cuv[j]);
                str[m[j]/2]='\0';
                strcat(sol,str);
                /*
                for(int k=0; k<m[j]/2; k++)
                {
                    str[0]=cuv[j][k];
                    str[1]='\0';
                    strcat(sol,str);
                }
                */
            }
            else strcat(sol,cuv[j]);
            strcat(sol," ");
        }
    }
    strcpy(s,sol);
    cout<<s;
    return 0;

}

SIII. 3
  #include<iostream>
#include <fstream>
#include<cstring>
using namespace std;
int main()
{
   ifstream cin("bac.in");
   int x,y,a,b,i=0,poz=0,cnt=0;
   cin>>a>>b;
   while(cin>>x>>y)
   {
       i++;
       if(max(a,x)<min(b,y))
       {
         cnt++;
         poz=i;
       }

   }
   cout<<cnt<<" "<<poz;
    return 0;

}
/* Alg este eficient dpdv al timpului de exec deoarece are complex O(n), n = nr de intervale
Alg este eficient dpdv al mem deoacere se folosesc 6 var intregi simple
Alg retine intervalul in care este disponibil tanarul [a,b]
Pentru fiecare interval asoc unui muzeu testam daca este disponibil.
In caz afirmativ crestem contorul si retinem ultima pozitia
*/
