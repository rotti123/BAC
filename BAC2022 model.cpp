
#include <iostream>

using namespace std;

int main() {
    int i=1,st[10]={},dr[10]={},x,lun,lunmax=0;
    while(cin>>x){
        if(st[x]==0){
            st[x]=i;
        }
        dr[x]=i;
        i++;
    }
    for(i=0;i<=8;i=i+2){
        lun=dr[i]-st[i]+1;
        if(lun>lunmax){
            lunmax=lun;
        }
    }
    cout<<lunmax<<endl;
    for(i=0;i<=8;i=i+2){
        lun=dr[i]-st[i]+1;
        if(lun==lunmax){
            cout<<i<<" ";
        }
    }
    return 0;
}
