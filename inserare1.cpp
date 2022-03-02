https://www.pbinfo.ro/probleme/2810/inserare1

#include<iostream>
using namespace std;
int main()
{
    int x,i,j, n,m;
    double a[100][100],s[100]={};
    cin>>n;
    for (i=1; i<=n; i++)
    for (j=1; j<=n; j++){
        cin>>a[i][j];
        s[j]=s[j]+a[i][j]; ///s[j]=suma pe coloana j
    }
    for(i=n;i>=n/2+1;i--){///parcurg de jos pana la mijloc
        for(j=1;j<=n;j++){
            a[i+1][j]=a[i][j]; ///linia crt se transf in linia urm
        }
    }
    for(j=1;j<=n;j++){
        a[n/2+1][j]=s[j]/n;
    }

    for (i=1; i<=n+1; i++){
    for (j=1; j<=n; j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
        }
}
