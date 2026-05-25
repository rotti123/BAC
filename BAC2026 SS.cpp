SIII.2
  #include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[51][51], m, n, minc[51], aux=0, poz=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int j=1;j<=n;j++){
        minc[j]=a[1][j];     /// minimul primului element din coloana
        poz=1;
        for(int i=1;i<=m;i++){
            if(a[i][j]<minc[j]){
                minc[j]=a[i][j];
                poz=i;
            }
        }
        if(minc[j]%2==0){
            aux=a[1][j];
            a[1][j]=a[poz][j];
            a[poz][j]=aux;
        }else{
            aux=a[m][j];
            a[m][j]=a[poz][j];
            a[poz][j]=aux;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
