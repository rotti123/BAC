SIII.2
  #include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    char s[101][21];
    unsigned n,nrv=0,nrvc,ok=0;
    cin>>n;
    cin.ignore();
    for( int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<strlen(s[n-1]);i++)
        if(strchr("aeiou",s[n-1][i]))
            nrv++;
    for(int i=0;i<n-1;i++)
    {
        nrvc=0;
        for(int j=0;j<strlen(s[i]);j++)
        if(strchr("aeiou",s[i][j]))
            nrvc++;
        if(strcmp(s[i],s[n-1])!=0 && nrv==nrvc)
        {
            ok=1;
            cout<<s[i]<<" ";
        }

    }
    if(ok==0)
        cout<<"nu exista";
    return 0;

}

SIII.3
  #include <bits/stdc++.h>
#include<cstring>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("bijuterii.in");
    int nc, np, fr[100]={}, ok=0,x;
    cin>>nc>>np;
    for (int i=1;i<=nc;i++){
        cin>>x;
        while (x>99){
            x/=10;
        }
        fr[x]++;
        fr[x%10*10+x/10]++;
    }
    for (int i=1;i<=np;i++){
        cin>>x;
        while (x>99){
            x/=10;
        }
        if (fr[x]!=0){
            ok=1;
        }
    }
    if (ok==0){
        cout<<"NU";
    }
    else cout<<"DA";
    return 0;
}
