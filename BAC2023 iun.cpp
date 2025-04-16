SIII ex 1.
  #include <iostream>
#include <vector>

using namespace std;

int sum(int x)
{
    int d;
    int s=0;
    if(x==1)
    {
        return 1;
    }
    for(d=1; d<=x; d++)
    {
        if(x%d==0)
        {
            s=s+d;
        }
    }
    return s;
}

int abundent(int nr)
{
    int ok=1;
    double rap,rap2;
    rap=1.0*sum(nr)/nr;
    for(int i=1; i<=nr-1; i++)
    {
        rap2=1.0*sum(i)/i;
        if(rap2>rap)
        {
            ok=0;
        }
    }
    return ok;
}

int main()
{
    int nr,ok=1;
    double rap,rap2;
    cin>>nr;
    cout<<abundent(nr);
    return 0;
}
