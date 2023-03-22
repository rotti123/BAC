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
