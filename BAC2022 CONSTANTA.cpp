SIII ex 3
    #include <iostream>

using namespace std;
int a[101],b[101];

int main(){
    int n, m, i = 1, j = 1, x, y,ok=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    cin >> m;
    for(i=1;i<=m;i++){
        cin>>b[i];
    }  
    x=-1;
    while (i <= n && j <= m){
       if(a[i]<b[j]){
            if(a[i]%3==0 && a[i]!=x){
                cout<<a[i]<<" ";
                ok=1;
                x=a[i];
            }
            i++;
       }
       else
       if(a[i]==b[j]){
            if(a[i]%3==0 && a[i]!=x){
                cout<<a[i]<<" ";
                ok=1;
                x=a[i];
            } 
            i++;
            j++;
       }
       else
       if(a[i]>b[j]){
            if(b[j]%3==0 && b[j]!=x){
                cout<<b[j]<<" ";
                ok=1;
                x=b[j];
            }          
            j++;
       }
    }
    for(int k=i;k<=n;k++){
        if(a[k]%3==0){
            cout<<a[k]<<" ";
            ok=1;
        }
    }
     for(int k=j;k<=m;k++){
        if(b[k]%3==0){
            cout<<b[k]<<" ";
            ok=1;
        }
    } 
    if(ok==0){
        cout<<"NU EXISTA";
    }
    return 0;
}
