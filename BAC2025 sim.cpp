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
