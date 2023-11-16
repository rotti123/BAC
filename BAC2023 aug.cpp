1b
2c
3a   s="201[9]"  s+3="9"
        0123
4b
5d
SII 1a) 2
1b) 2 2 0 3 0

citește n (număr natural nenul)
x0
┌pentru i<-n,1,-1 execută
│ citește a,b (numere naturale)
│ ca; p1
│┌cât timp a>9 execută
││ a[a/10]; pp*10
│└sfarsit cat timp
│ aa*p+b
│┌dacă a≠c atunci
││ xx+1
│└sfarsit daca
└■
 scrie x

1 2
2 3
2 6
3 4
3 5

if(p.pret<100){
a=p.denumire[0];
}
else{
a='*';
}
 
#include <iostream>
using namespace std;
int prim(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void DNPI(int n)
{
    for(int i=1;i<=n;i+=2){
        if(n%i==0 && prim(i)==0)
            cout<<i<<" ";
    }
}

int main()
{
    int a[100][100], n, m, s=0, smax=0;
    cin >> m >> n;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<m; i++) {
        for (int j=1; j<n; j++) {
            s=a[i][j]+a[i+1][j] + a[i][j+1]+ a[i+1][j+1];
            if (smax<s) {
                smax=s;
            }
        }
    }
    cout << smax;

}

III.3
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream cin("date.in");
    int n,m,a[100]={},b[100]={},x,s=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=m;i++) {
        cin>>x;
        b[x]++;
    }
    for(int i=1;i<=100;i++){
        if(a[i]>b[i]) s=s+b[i];
        else s=s+a[i];
    }
    cout<<s;
}
