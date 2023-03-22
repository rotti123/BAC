SIII.1
  #include <iostream>
using namespace std;

int f(int x)
{
  int cnt=0;
  for(int i=1;i<=x;i++)
    {
      if(x%i==0)
        cnt++;
    }
return cnt;
}
void divizorik(int n,int k)
{
    int val=f(n);
    int cnt=0;
    while(cnt<k)
      {
        n=n+1;
        if(f(n)==val)
        {
          cout<<n<<" ";
          cnt++;
        }
      }
}
int main()
{
    int n,k;
    cin>>n>>k;
    divizorik(n,k);

}

SIII.2
  #include <iostream>
#include <cstring>
using namespace std;


int main()
{
    int  lung=0, lmin=1000, st=-1, dr=-1,cod;
    char s[101];
    cin.getline(s,101);

  for(int i=0; i<=strlen(s)-5; i++)
    for(int j=i+4; j<strlen(s); j++)
      {
        int v[10]={},ok=1; ///vect de aparitii
        for(int k=i; k<=j; k++)
          if(strchr("13579", s[k])){
            cod=s[k]-'0';
            v[cod]=1;
          }
        for(int poz=1; poz<=9; poz+=2)
          {
            if(v[poz]==0)
              ok=0;
          }
        lung=j-i+1;
        if(lung<=lmin && ok)
        {
          lmin=lung;
          st=i;
          dr=j;
        }
        
      }
  if(st!=-1)
    for( int i=st; i<=dr; i++)
      cout<<s[i];
  else cout<<"nu";
}

