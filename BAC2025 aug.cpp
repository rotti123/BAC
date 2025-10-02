SIII.1
  #include <bits/stdc++.h>
using namespace std;
void teren(int x,int y)
{
    int A=x*y, ok=0;
    for(int d=2; d<=A/2; d++) /// d*d<=A
        if(A%d==0 && d%2==0 && d<A/d)
        {
            cout<<d<<" parcele de arie "<<A/d<<endl;
            ok=1;
        }
    if(ok==0)
        cout<<"nu exista";

}

int main()
{

    teren(6,8);
    return 0;
}

SIII.2
  #include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[101][101], n, m, col, x, Min, i,j;
    cin>>n>>m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>a[i][j];
    Min=a[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            if(a[i][j]<Min)
            {
                Min=a[i][j];
                col=j;
            }
        }
    x=a[n-1][m-1];
    for(i=0; i<=n-1; i++)
        a[i][col]=x;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


SIII. 3.
  #include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
  ifstream cin("bac.in");
  int minz,minp,x,poz=0,a=0,b=0,ok=0,sum=0,sol=0;
  cin>>minz>>minp;
  while(cin>>x){
    poz++;
    if(ok==0){
        if(x>=minz){
            a=poz;
            b=poz;
            sum=x;
            ok=1;
        }
        else {
            if(b-a+1>=2&& sum>=minp){
                cout<<a<<" "<<b<<" "<<sum<<endl;
                a=0;
                b=0;
                sum=0;
                sol=1;
            }
        }
    }
    else{
       if(x>=minz){
        b=poz;
        sum=sum+x;
       }
       else{
        ok=0;
        if(b-a+1>=2&& sum>=minp){
            cout<<a<<" "<<b<<" "<<sum<<endl;
            sol=1;
        }
       }
    }
  }
  if(sum >= minp && b - a + 1 >= 2)
    cout << a << " " << b << " " << sum;
    if(sol==0){
        cout<<"nu exista";
    }
}

/*
este eficient dpdv al memoriei pentru ca am folosit 
8 variabile intregi simple.
este eficient dpdv a timpului deoarece are o complexitate O(n)
unde n reprezinta numarul de zile.
gasim un interval valid
calculam suma zilelor din interval
cautam urmatorul interval
tratam cazul in care nu avem un caz valid
*/


