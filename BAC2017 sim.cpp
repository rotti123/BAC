#include <iostream>
#include <cstring>
#include <fstream>
using  namespace std;
int ranguri(int n)
{
    int k=0,ord=0;
    if(n==0)
        return 1;
    while(n!=0)
    {
        if(n%10==ord)
        {
            k++;
        }
        n=n/10;
        ord++;
    }
    return k;

}
int main()
{
    int n,m,a[10001],b[10001],c[20002],i,j,k;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>b[i];
    }
    i=n;
    j=m;
    k=0;
    while(i>=1 && j>=1)
    {
        while(i>=1 && a[i]%2)
        {
            i--;
        }
        if(i<1)
            break;
        while(j>=1 && b[j]%2)
        {
            j--;
        }
        if(j<1)
            break;
        if(a[i]>b[j])
        {
            k++;
            c[k]=a[i];
            i--;
        }
        else if(a[i]<b[j])
        {
            k++;
            c[k]=b[j];
            j--;
        }
        else if(a[i]==b[j])
        {
            k++;
            c[k]=a[i];
            i--;
            j--;
        }

    }
    while(i>=1)
    {
        if(a[i]%2==0)
        {
            k++;
            c[k]=a[i];
        }
        i--;
    }
    while(j>=1)
    {
        if(b[j]%2==0)
        {
            k++;
            c[k]=b[j];
        }
        j--;
    }
    for(i=1;i<=k;i++)
    {
        cout<<c[i]<<" ";
    }



    /*int n,a[21][21]={};
    cin>>n;
    cout<<ranguri(n);
    return 0;
    for(int i=1;i<=n;i++){
     a[1][i]=n;
     a[i][n]=n-i+1;
    }
    for(int i=2;i<=n;i++){
     for(int j=n-1;j>=1;j--){
         a[i][j]=a[i-1][j]+a[i][j+1];
     }
    }
    for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         //cout<<a[i][j]<<" ";
     }
       //cout<<endl;
    }*/


}
