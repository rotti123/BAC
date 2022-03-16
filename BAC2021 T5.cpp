//T5 rezolvare Maurice

S1.
1 d
2 a
3 c
4 d
5 b

S2.
1)

12 7 354 9 630 0

x=12 y=0
x=1  y=1

x=7 	y=1*10+7=17
x=354 	y=17
x=35	y=17
x=3	y=173

x=9	y=1739

x=630	y=17396

x=0 STOP

17396

b) 33 21 11 0 SAU 3 2 1 0 (3--- 2--- 1--- 0 forma generala)
c)
#include <iostream>
using namespace std;

int main(){
	int x,y;
	y=0;
	cin >> x;
	do{
	  if(x>9){
		do{
		x/=10;
		}while(x>9);
	   y=y*10+x;
	   cin >> x;
	while(x!=0);
	cout<< y;
	return 0;
}
	
d)
citeşte x
 (număr natural nenul)
y<-0
┌cat timp(x!=0) executa
│┌cat timp (x>9) executa
││
││ x<-[x/10]
││
│└sf cat timp
│ y<-y*10+x
│ citeşte x (număr natural)
└sf cat timp
scrie y

2)
	struct carte{
		char titlu[51]={};
		int nrExemplare;
		char autor[10][51];
	}c;

3)

//rezolvare Cristina	
SIII
1)
int identice (int n)
{
    int m, d, ok=1;
    while(n>9)
    {
        m=n%10;
        n=n/10;
        d=n%10;
        if (m!=d) ok=0;
    }
return ok;
}

2)
#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, a[100][100];
    cin>>n>>m;
    
    for (i=1; i<=n; i++){
        for (j=1;j<=m; j++){
            a[i][j]=(i*j)%10;
        }
    }
    
     for (i=1; i<=n; i++){
        for (j=1;j<=m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}

		
///SIII ex 1
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int identice(int n){
  int c, val;
  val = n % 10;
  n = n / 10;
  while(n!=0){
      c = n % 10;
      if(val != c) return 0;
      n = n / 10;
  }
  return 1;
}

int main() {
  int n;
  n=222;
  cout<<identice(n);
  return 0;
  }
		
///SIII ex 2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
  ifstream cin("bac.txt");
  int m, n, a[100][100];
  cin >> m >> n;
  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      a[i][j] = i * j % 10;
    }
  }
  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
  }

