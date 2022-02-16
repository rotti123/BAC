///SII ex1 b) !!!!!!!!!!!!!

/// SIII ex1 
#include <iostream>
 
using namespace std;
 
void imog(int x, int y , int &rez){
    int p=1,m=0,n=0,c;
    while(x!=0){
        c=x%10;///
        x/=10;
        if(c%2==1) m=m*10+c;/// construiesc numarul fara cifrele pare inversat
    }
    p=1;
    while(y!=0){
        c=y%10;
        y/=10;
        if(c%2==1){
            n=n+c*p;
            p*=10;
        }
    }
    if(m==n && m!=0) rez=1;
    else             rez=0;
}
 
int main() {
    int x,y,rez;
    cin >> x>>y;
    imog(x,y,rez);
    cout<<rez;
    return 0;
}

///SIII ex 3
#include <iostream>
 
using namespace std;
 
int main() {
    int x,y,n;
    cin >> x >> y;
    cout << y << " " << x << " ";
    if (x == 1) return 0;
    n = (y-x)/2;
    while (x != 1){
        y = x;
        n--;
        x = y-2*n;
        cout << x << " ";
    }
    return 0;
}

//SIII ex 2:

#include <iostream>
using namespace std;

int main() {
    int n,k,a[21][21]={},aux;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int poz=1;poz<=k-1;poz++){
        aux=a[k][poz];
        a[k][poz]=a[poz][k];
        a[poz][k]=aux;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
