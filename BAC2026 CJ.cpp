f(0) -> 0
f(1) -> 1
f(2) -> x=1
	f(0) -> 0
	1 		-> 01
f(3) -> x=2
	f(1) -> 1
	x=1
	f(0) -> 0
	1  		->101
f(4) -> x=3
	f(2) -> 01
	x=2
	f(1) -> 1
	x=1
	f(0) -> 0
	1		->01101
f(5) -> x=4
	f(3) -> 101
	x=3
	f(2) -> 01
	x=2
	f(1) -> 1
	x=1
	f(0) -> 0
	1		->10101101

I.3 a)
2+2+2+3
2+2+5
2+7

12|2   12=2^2*3^1
 6|2
 3|3
 1

48|2	48=2^4*3^1
24|2
12|2
6|2
3|3
1
		   3^4  3^2*5
II 1. b) (27,18), (81,45)

II 1. d)

 n←0 
  cât_timp a%d=0 și b%d=0 execută 
    p←p*d 
    n←n+1 
    a←[a/d] 
    b←[b/d] 
  sfarsit_cât_timp 
daca a%d=0 și b%d=0 atunci 
repeta 
    p←p*d 
    n←n+1 
    a←[a/d] 
    b←[b/d] 
pana cand a%d!=0 sau b%d!=0
sfarsit daca

II.3
if(i%2==0) a[i][j]= 6*i + j+1;
else	   a[i][j]= 6*i + 6-j;

   i=1 j=5 6*1+6-5=7
   i=1 j=0 6*1+6-0=12

III.1
#include <iostream>
#include <fstream>
using namespace std;

bool calduros(int n)
{
    int cif=n%10;
    while(n>9){
        n/=10;
    }
    return (cif%2==n%2);
}
int sub(int v[], int n)
{
    int maxx=-1, poz=0;
    for(int i=1; i<=n; i++){
        if(calduros(v[i])!=0){
            if(v[i]>maxx){
                maxx=v[i];
                poz=i;
            }
        }
    }
    if(poz==0) return -1;
    return poz;

}


III.2
int main()
{
    int a[111]={0, 21, 412, 2, 2026, 208, 523, 7, 128, 3174, 2026, 46, 8};
    int n=12;
    cout<<sub(a, n);
    return 0;
}

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    char s[501],*p;
    char a[501][501];
    int i=0,poz,n;
    cin.get(s,500);
    p=strtok(s," ");
    while(p!=NULL) {
        strcpy(a[i],p);
        i++;
        p=strtok(NULL," ");
    }
    n=i;

    int st,dr,lung;
    for(lung=1;lung<250;lung++) {
        st=0,dr=n-1;
        while(st<dr)
        {
            while(st<n&&strlen(a[st])!=lung)
                st++;
            if(st>=dr)
            {
                break;
            }
            while(dr>0&&strlen(a[dr])!=lung)
                dr--;
            if(st>=dr)
            {
                break;
            }
            char aux[500];
            strcpy(aux, a[st]);
            strcpy(a[st], a[dr]);
            strcpy(a[dr], aux);
            st++; dr--;
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}





SII.2 V2
  #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
/**
struct Cuvant{
    char s[501];
    int poz,viz=0;
}C[501],cuv;
*/
char C[501][501];

int main()
{
    int ind=0,lmax=0;
    char a[501],*p,cuv[501];
  //  ifstream cin ("bac.txt");
    cin.getline(a,500);
    p=strtok(a," ");
    while(p!=NULL){
        ind++;
        if(lmax<strlen(p)){
            lmax=strlen(p);
        }
       // strcpy(C[ind].s,p);
       // C[ind].poz=ind;
        strcpy(C[ind],p);
        p=strtok(NULL," ");
    }
    ///ind= nr de cuvinte
    for(int lung=1;lung<=lmax;lung++){
        int st=1,dr=ind;
        while(st<dr){ /// tehnica Two Pointers
            while(st<=ind &&strlen(C[st])!=lung){
                st++;
            }
            if(st>ind) break;
             while(dr>0 &&strlen(C[dr])!=lung){
                dr--;
            }
            if(dr==0) break;
            if(st<dr){
                strcpy(cuv,C[st]);
                strcpy(C[st],C[dr]);
                strcpy(C[dr],cuv);
                st++;
                dr--;
            }
        }
    }
    for(int i=1;i<=ind;i++){
      //  cout<<C[i].s<<"\t"<<C[i].poz<<"\n";
      cout<<C[i]<<" ";
    }
    return 0;
}


SIII.3
	#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    int n,p,R[1000]={},c,i,j;
    long long sol=0;
    cin>>n>>p;
    for(i=0;i<n;i++) {
        cin>>c;
        R[c%p]++;
    }
    n=R[0];
    sol+=n*(n-1)/2;
    for(i=1;i<(p+1)/2;i++)
    {
        j=p-i;
        sol+=R[i]*R[j];
    }
    if(p%2==0)
    {
        n=R[p/2];
        sol+=n*(n-1)/2;
    }
    cout<<sol<<" ";
    return 0;
}

