SIII.1
  #include <iostream>

using namespace std;

int main()
{
    int n,x,y,S=0,u,aux,c,minn;
    cin>>n>>x>>y;
    u=n%10;
    for(int nr=x;nr<=y;nr++){
        aux=nr;
        minn=10000;
        while(aux>0){
            c=aux%10;
            aux=aux/10;
            if(c<minn){
                minn=c;
            }
        }
        if(minn>=u){
            S=S+nr;
        }
    }
    cout<<S;
    return 0;
}
