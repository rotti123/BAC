///SII ex1 b) !!!!!!!!!!!!!

/// SIII ex1 
#include <iostream>
#include <fstream>
using namespace std;

void imog(int x, int y,int &rez)
{
    int nrx=0,nry=0;
    int p=1;
    while(x)
    {
        if(x%2==1)
        {
            nrx=nrx+x%10*p;
            p=p*10;
        }
        x=x/10;

    }
    while(y){
        if(y%2==1){
            nry=nry*10+y%10;
        }
        y/=10;
    }
    if(nrx==nry && nrx!=0) rez=1;
    else rez=0;
}

int main()
{
    int x,y,rez;
    cin>>x>>y;
    imog(x,y,rez);
    cout<<rez;
    return 0;
}
///SIII ex2
#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    unsigned int n,k,a[21][21],i,j,aux;
    cin>>n>>k;
    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
    for (i=1; i<=k-1; i++)
    {
        aux=a[i][k];
        a[i][k]=a[k][i];
        a[k][i]=aux;
    }
    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

///SIII ex 3
#include <iostream>
 
using namespace std;
 
int main() {
    int x,y,n;
    cin >> x >> y;
    cout << y << " " << x << " ";
    if (x == 1) return 0;
    n = (y-x)/2;
    while (x != 1){
        y = x;
        n--;
        x = y-2*n;
        cout << x << " ";
    }
    return 0;
}

//SIII ex 2:

#include <iostream>
using namespace std;

int main() {
    int n,k,a[21][21]={},aux;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int poz=1;poz<=k-1;poz++){
        aux=a[k][poz];
        a[k][poz]=a[poz][k];
        a[poz][k]=aux;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
