// SIII.3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, Lmax=1, L=1, st=-1, dr=-1;
    ifstream cin("bac.txt");
    cin>>a;
    while(cin>>b)
    {
        if(b==a+1)
        {
            L++;
        }
        else
        {
            if(L>Lmax)
            {
                Lmax=L;

                dr=a;  // Lmax=dr-st+1 => st=dr-Lmax+1
                st=dr-Lmax+1;
            }
            L=1;
        }
        a=b;
    }
    if(L>Lmax)
    {
        Lmax=L;

        dr=a;  // Lmax=dr-st+1 => st=dr-Lmax+1
        st=dr-Lmax+1;
    }
    if(st==-1)
    {
        cout<<"nu exista";
    }
    else for(int i=st; i<=dr; i++)
        {
            cout<<i<<" ";
        }
}
//  500 600 601 405 569 570 700 701 625 626 627 520
//   a   b
//       a   b
