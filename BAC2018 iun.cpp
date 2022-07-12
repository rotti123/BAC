SII ex 4
if(i==j) a[i][j]=0;
else if(i+j>=8) /// a[i][j]=(i+j)%8
	a[i][j]=i+j-8;
     else
	a[i][j]=(i+j);

SII ex 5

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char s[101], c[101],sol[101]={},st[101]={},dr[101]={};
  int cod;
cin>>s>>c;
if (strlen (s)!=strlen (c))
{
  cout<<"cod incorect";
}
  for(int i=0;i<strlen(c);i++)
    {
      ///VAR 1
      cod=c[i]-'0';
      if(cod%2==0){
          st[0]=s[i]; ///constr sirul format doar din caracterul s[i]
          st[1]='\0';
          strcat(st,sol); //imbina st+sol 
          strcpy(sol,st); //copiez in sirul sol ce am nevoie
      }
      else{
          dr[0]=s[i];
        dr[1]='\0';
        strcat(sol,dr);
      }
     
    }
    cout<<sol;
  return 0;
}
	
SIII ex 3
  
#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
  ifstream cin("test.in");
  ofstream cout("test.out");
  int r,n,x,y,k=0;
  cin>>r>>x>>y>>n;
  for(int a=1;a<=n;a++){
    if(a%x==r && a%y==r) k++;
  }
  cout<<k;
}

SIII ex 4
#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
  ifstream cin("test.in");
  ofstream cout("test.out");
  int v[10],x,a,b,c,lmax=0,lung=2;
  cin>>a>>b;
  while(cin>>c){
    if(c!=b&&c!=a&&a!=b)
    {
      lung++;
    }
    else
    {
      if(lung>lmax) lmax=lung;
      lung=2;
    }
    a=b;
    b=c;
  }
  if(lung>lmax) lmax=lung;
  cout<<lmax;
}
