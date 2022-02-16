///SIII ex 1
#include <iostream>

using namespace std;
void afisare (int x, int y, int k)
{
    int cntr=0;
    for (int i=x; i<=y; i++)
    {
        cout<<i<<' ';
        cntr=cntr+1;
        if (cntr%k==0)
        {
            cout<<"* ";
        }
    }
    if (cntr%k!=0)
    {
        cout<<"*";
    }
}
int main() {
    int x,y,k;
    cin>>x>>y>>k;
    afisare (x,y,k);
    
    
    
    return 0;
}
