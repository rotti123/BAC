SIII.3
#include <iostream>
using namespace std;
/* Ex:
n=900000=3^2*2^5*5^5
x=3^1*2^2*5^2
x^2=3^2*2^4*5^4
y=3^0*2^1*5^1

sqrt(n)=x*sqrt(y)
n = x^2 * y =>  y=n/x^2
  */
void radical (int n, int &x, int &y)
{
    x = 1;
    int d = 2, epn, cpn;
    cpn = n;
    while (d * d <= n)
    {
        epn = 0;
        while (n % d == 0)
        {
            n /= d;
            epn++;
        }
            for (int i = 1; i <= epn / 2; i++)
                x *= d;
        d++;
    }
    y = cpn / x / x;
}

int main()
{
    int n, x, y;
    cin >> n;
    radical(n, x, y);
    cout << x << " " << y;

    return 0;
}

SII.xx
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("bac.txt");

int main()
{
    char s[101], a[101][101]={}, *p; ///arena
   int k=0,ok=0,poz;                 ///01234
    cin.getline(s, 100);
    p = strtok (s, " ");
    while (p != NULL)
      {
        strcpy(a[k], p);
        p = strtok(NULL, " ");
        k++;
      }
    for (int i = 0; i < k; i++)
      {
        if(strlen(a[i]) % 2 == 1)
        {
          char cuv[101]={};
          int q=0,poz=strlen(a[i])/2;
          for(int x=0;x<strlen(a[i]);x++){
            cuv[q]=a[i][x];
            q++;
            if(x==poz){
                cuv[q]=a[i][x];
                q++;
            }
          }
          cuv[q]='\0';
         
         /*
                char aux[101];
                strcpy(aux,v[i]);
                strcpy(a,aux+l/2+1);
                aux[l/2+1]=aux[l/2];
                strcpy(aux+l/2+2,a);
         
         */
          cout<<a[i]<<" "<<cuv<<'\n';
          for(int j = 0; j < k; j++)
            {
              if(strcmp(a[j], cuv) == 0)
              {
                ok = 1;
                cout << "DA";
                return 0;
              }
            }
        }
      }
    cout << "NU";

    return 0;
}
