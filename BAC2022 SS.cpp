https://www.pbinfo.ro/resurse/9dc152/examene/2022/E_d_informatica_2022_sp_MI_C_var_04_LRO.pdf

SIII ex 1
  void patrate(int n, int &x, int &y){
  for (x=2; x*x<n; x++){
    for (y=x+1; y*y<n; y++){
      if (x*x*y*y==n)
        return; //iesire fortata din fct void
    }
  }
  x=0; y=0;
}

SIII ex 2
int main() {
  int a[101][101],n,i,j;
  cin>>n;
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      {
        cin>>a[i][j];
      }
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      {
        if(i<j)
          a[i][j-1]=a[i][j];
      }
  for(i=1;i<=n;i++){
    for(j=1;j<n;j++)
      {
        cout<<a[i][j]<<" ";
        
      }
      cout<<endl;
    }
    return 0;
}

SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("bac.txt");
    int x,y,c1,lung=0,lmax=0,ok=0,k,primul=1;

    while(cin>>x)
    {
        if(primul==1)
            k=1;
        else{
            if(x==y){
                k=2;
            }
            else{
                k=1;
            }
            primul=1;
        }
        ok=1;
        while(k<x && cin>>y)  ///testez daca urm x-1 valori sunt egale cu x
        {
            k++;
            if(x!=y)
            {
                ok=0;
                primul=0;
                break;
            }
        }
      
        if(k!=x) ok=0;
        
        if(ok==1)
        {
            lung = lung +x; ///adaug la lung secv progresive val x
            if(lung>lmax){
                lmax=lung;
               // cout<<lmax<<" "<<x<<endl;
            }
        }
        else lung=0;
    }
    cout<<lmax;
    return 0;
}

########################################################################
SIII ex 3 [Cosmin]

#include <iostream>

using namespace std;

int main() {
    int x,y,k=1,lung=0,maxx=0;
    cin>>x;
    if(x==1){
      lung=1;
      maxx=1;
      k=0;
    }
    while(cin>>y){
        k++;
        if(x!=y){
            if(k==x){
                lung+=k;
                if(lung>maxx)   maxx=lung;
            }
            else lung=0;
            k=0;
        }
        x=y;
    }
    k++;
    if(k==x){
      lung+=k;
      if(lung>maxx)   maxx=lung;
    }
    cout<<maxx;
    return 0;
}

/*

████████╗███████╗███╗░░██╗████████╗░█████╗░████████╗██╗██╗░░░██╗░█████╗░    
╚══██╔══╝██╔════╝████╗░██║╚══██╔══╝██╔══██╗╚══██╔══╝██║██║░░░██║██╔══██╗    
░░░██║░░░█████╗░░██╔██╗██║░░░██║░░░███████║░░░██║░░░██║╚██╗░██╔╝███████║    
░░░██║░░░██╔══╝░░██║╚████║░░░██║░░░██╔══██║░░░██║░░░██║░╚████╔╝░██╔══██║    
░░░██║░░░███████╗██║░╚███║░░░██║░░░██║░░██║░░░██║░░░██║░░╚██╔╝░░██║░░██║    
░░░╚═╝░░░╚══════╝╚═╝░░╚══╝░░░╚═╝░░░╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝    

███╗░░░███╗░█████╗░██╗░░░██╗██████╗░██╗░█████╗░███████╗
████╗░████║██╔══██╗██║░░░██║██╔══██╗██║██╔══██╗██╔════╝
██╔████╔██║███████║██║░░░██║██████╔╝██║██║░░╚═╝█████╗░░
██║╚██╔╝██║██╔══██║██║░░░██║██╔══██╗██║██║░░██╗██╔══╝░░
██║░╚═╝░██║██║░░██║╚██████╔╝██║░░██║██║╚█████╔╝███████╗
╚═╝░░░░░╚═╝╚═╝░░╚═╝░╚═════╝░╚═╝░░╚═╝╚═╝░╚════╝░╚══════╝

(ง︡'-'︠)ง (ง︡'-'︠)ง (ง︡'-'︠)ง
*/
1 d
2)

f(220223,3)= f(22022,2)
f(22022,2)=f(2202,1)
f(2202,1)=f(220,0)
f(220,0)=2202

raspuns c
2)c

3) 
Dokker  Neg 1
Duster  Neg 2
Lodgy   Gri 3
Logan   Alb 4
Sandero Ros 5

Acceasi culoare nu se poate expune simultan
Sandero nu poate aparea pe poz 1
4 dupa 1 2


1 3 4
1 3 5
1 4 3
1 4 5
1 5 3
1 5 4
2 3 4
2 3 5
2 4 3
2 4 5
3 1 4
3 1 5
3 2 4
3 2 5
3 4 5
3 5 1
3 5 2
3 5 4
4 3 5
4 5 3

3) a
4) c
5) b

SII.

n=1237518	x=18	p=0
n=123751	x=51	p=0
n=12375		x=75	p=0
n=1237		x=37	p=1*1*2*2
scrie 37
n=123		x=23	p=1*1*3*2
scrie 23
n=12 		x=12	p=0
Stop

a)37 23
b)113, 237
c)
#include <iostream>
using namespace std;

int main(){

int n, x,p;
cin >> n;
do{
	x=n%100;
	if(x>1){
	  p=x%2*x%3*x%5*x%7;
		if(p!=0){
			cout<<x<<' ';
		}
	}
	n=n/10;
}while(x>=10);

d)citeşte n (număr natural)
┌cat timp x>=10 executa
│ x<-n%100
│┌dacă x>1 atunci
││ p<-(x%2)*(x%3)*(x%5)*(x%7)
││┌dacă p!=0 atunci
│││ scrie x,’ ’
││└■
│└■
│ n<-[n/10]
└sf cat timp


2) 1,2 ; 1,3; 1,5 ; 2,3; 2,5; 5,3
3)
s=0;
for(i=1;i<=15;i++){
	s=s+(t[i].nrLocuri*t[i].pret);
}

SIII.

1)
void putere(int n, int &x, int &y){
    int ok=0;
    x=0;
    y=0;
    
    for(int i=2; i*i<=n && ok==0 ;i++){
        for(int j=i+1;j*j<=n && ok==0;j++){
            if(i*i*j*j==n){
                x=i;
                y=j;
                ok=1;
            }
        }
    }
}


2)

#include <iostream>

using namespace std;

int main()
{
    int n, a[101][101]={};
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
            a[i][j]=a[i][j+1];
        }
    }
    a[n][n]=0;
    
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n-1;j++){
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }

    return 0;
}

3)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("bac.txt");
    int x,y,lung=0,lmax=-1,k_ap=0;
    cin>>x;
    k_ap++;
    while(cin >> y){
        if(y!=x){
            if(k_ap==x){
              lung=lung+x;
              k_ap=1;
            }
            else{
                if(lung>lmax){
                  lmax=lung;
                  lung=0;
                    }
                k_ap=1;
                lung=0;
            }
        }
        else{
            k_ap++;
        }
        x=y;
    }
    if(k_ap==x){
              lung=lung+x;
    }
    if(lung>lmax) lmax=lung;
    cout<<lmax;
    

    return 0;
}

/*
 Algoritmul...
*/
