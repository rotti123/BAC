http://sparknews.ro/wp-content/uploads/2023/01/E_d_Informatica_sp_MI_C_C_simulare_ian_2023_subiect.pdf?fbclid=IwAR1GQElDu16DA2pD2HkeJ3mszVhNbBggiU0OI1YslLWOGdxhYcxT8afJvqY

SI.2
  fac(0,f) -> f=1
fac(1,f) -> fac(0,g) -> g=1
            f=g*n=1*1=1
fac(2,f) -> fac(1,g) -> g=1
            f=g*n=1*2=2
Raspuns d. fac(n-1,g)

SII

#include <iostream>
#include <fstream>

using namespace std;

struct fractie{
 int numarator, numitor;
};
struct fractie f1,f2, suma;

int cmmdc_rec(int a,int b){
  if(b==0) return a;
  return cmmdc_rec(b,a%b);
}

int cmmdc_it(int a,int b){
  int r;
  while(b!=0){
    r=a%b;
    a=b;
    b=r;
  }
}

int cmmdc(int x, int y)
{
  while(x!=y)
    {
      if(x>y)
        x-=y;
      else
        y-=x;
    }
  return x;
}

int main()
{ 
  int div;
  
  cin>>f1.numarator>>f1.numitor>>f2.numarator>>f2.numitor;

  suma.numarator = f1.numarator*f2.numitor+f1.numitor*f2.numarator;
  suma.numitor = f1.numitor*f2.numitor;

  div=cmmdc(suma.numarator, suma.numitor);

  suma.numarator/=div;
  suma.numitor/=div;
  
  return 0;
}


SIII 1.  Var I
#include <iostream>
using namespace std;
void ecran(int n) //!!!!!!!!!!!!!!!!!!!!
{
  int V[8]={},i=0,k=1,pre;
  pre=n;
  while(n!=0)
    {
      V[i]=n%10;
      n/=10;
      i++;
    }
  while(i!=0)
    {
        cout<<pre;
      for(int j=0;j<k;j++)
        cout<<"*";
      for(int j=i-1;j>=0;j--)
        cout<<V[j];
      cout<<endl;
      i--;
      k+=2;
      pre/=10;
    }
      for(i=0;i<k;i++)
    cout<<"*";
}
int main()
{
  int n, x, p=1,y,nrc;
  cin>>n;
  ecran(n);
  return 0;
}


SIII 1.  Var II
#include <iostream>
#include <cstring>
using namespace std;

void genereaza(int n){
  int k,p=1,x,cif,poz=1;
  char str[15]={},a[15]={},stea[2]="*";
  x=n;
  while(x!=0){
    p=p*10;
    k++;
    x=x/10;
  }
  p=p/10; //// 2023=2*10^3+...
  for(int i=0;i<k;i++){
    cif=n/p%10; ///extrag cifrele din stg -> drp 2 0 2 3
    str[i]=cif+'0';
    p=p/10;
  }
  strcpy(a,str);
  strcat(str,stea);
  strcat(str,a);
  cout<<str<<'\n';
  for(int lin=1;lin<=k;lin++){
    str[k+poz]='*';
    str[k-poz]='*';
    poz++;
    cout<<str<<'\n';
  }
}

int main()
{
  int n;
  cin>>n;
  genereaza(n);
  return 0;
}

