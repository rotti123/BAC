

SIII ex1
#include <iostream>
using namespace std;

    void putere (int n, int &d, int &p){
            int dmin = 1000000, pmin = 1000000;
            d=2;
        while (n != 1){
                p = 0;
                while (n % d == 0){
                        p++;
                        n = n/d;
                }
                if (p < pmin && p > 0){
                        pmin = p;
                        dmin = d;
                }
                d++;
        }
        d = dmin;
        p = pmin;
    }

int main() {
    int n, p ,d;
    cin >> n;
    putere(n, d ,p);
    cout << d << " " << p;
    return 0;
}


SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int a[401][21], n, k,pv=1;
  cin >> n >> k;
  for(int i = 1; i <= n * k; i++){
     a[i][1]=pv;
     if(i%k==0) pv++;
    for(int j = 2; j <= n; j++){
      a[i][j] = a[i][j-1]+1;

    }
  }
  for(int i = 1 ; i <= n*k; i++){
    for(int j = 1; j <= n; j ++){
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }

    return 0;
}


-Simedre Patricia-
    
    test 13

1) a)

2)x=200200 r 2*f(20020) ->  320
  x=20020  r 2*f(2002) ->160
  x=2002   r 2*f(200) -> 80
  x=200    r 2*f(20) -> 40
	       r 20

(d)

3) 577 585 587 65  (a)

4) 1,3,4,5,6,10 (c)

5) n(n-1)/2 = 21
21-20=1 
(b)

II
1.
a) 10375
b) 1000 1010 1000
c)
#include <iostream>

using namespace std;

int main() {
    int n,p,m,k,x,i,c;
    cin>>n;
    p=1; m=0; k=0;
    while(n!=0){
        cin>>x;
        i=k;
        while(i!=0){
            x/=10; i--;
        }
        if(x==0)
        c=n%10;
        else
        c=x%10;
    m=c*p+m; n/=10; p*=10; k++;
    }
    cout<<m;
    return 0;
}
d)
citeşte n (număr natural)
p<-1; m<-0; k<-0
┌cât timp n≠0 execută
│ citește x (număr natural)
│ 
│┌pentru i <- k,0,-1
││ x<-[x/10];
│└■
│┌dacă x=0 atunci c<-n%10
││altfel c<-x%10
│└■
│ m<-c*p+m; n<-[n/10]
│ p<-p*10; k<-k+1
└■
scrie m

2. struct cerc{
	struct{
	 float x,y;
	}
  float raza,centru;
}c;


III
3.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream cout("bac.txt");

    int x;
    cin>>x;
    cout<<x<<" ";
    while(x>1){
            if(x%2==0)
                x=x/2;
            else
            x--;
    cout<<x<<" ";
    }
    return 0;
}

III 3. Var 2
	#include <iostream>
using namespace std;

int main() 
{
  int x;
  cin >> x;
  while(x>=1){
        cout<<x<<" ";
        x=x/2;
  }
  
}
/*
Complexitatea algoritmului este O(log2(n))
Afisam toate puterile lui 2 in ordine descrescatoare incepand 
de la valoarea x citita.
*/
