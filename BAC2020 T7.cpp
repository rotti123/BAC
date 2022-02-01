//Subiectul II
1.a)
n=253387  x=1	m=0
	  	p=1
	  	cn=253387
	  	c=7
	  	cn=25338
	  x=3	cn=253387
	  	m=33
	  x=5	m=533
	  x=7	m=7533
b)20 88
d)
citește n
 (număr natural nenul)
 m<-0; p<-1
┌pentru x<-1,9,2 execută
│ cn<-n
│┌cât timp cn≠0 execută
││ c<-cn%10; cn<-[cn/10]
││┌dacă c=x atunci
│││ m<-c*p+m; p<-p*10
││└■
│└■
└■
scrie m
2.
struct biblio{
	int numar;
	struct{
		char titlu[20],autor[20];
	}carte[100];
}c;
3.
stilou
012345

ou
rosu
//Subiectul III:
1.
int putere(int n, int p){
    int d=2,k=0;
    while(n>1){
        while(n%d==0){
            n=n/d;
            if(p==d){
                k++;
            }
        }
        d++;
    }
    if(k==0) return -1;
    return k;
}
2.
#include <iostream>

using namespace std;

int main() {
    int n,m,a[21][21],ok=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(a[i][1]==a[j][n]){
                cout<<a[i][1]<<" ";
                ok=1;
            }
        }
    }
    if(ok==0){
        cout<<"nepolarizate";
    }
    return 0;
}
3.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.txt");
    int x,s=0,smin=10000;
    while(cin>>x){
        if(s>0){
            s=x;
        }
        else s=s+x;
        if(s<smin){
            smin=s;
        }
    }
    cout<<smin;
    return 0;
}
