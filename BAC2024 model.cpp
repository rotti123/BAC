
I.2
n=3  1+2+3
f(3)=3+f(2)=3+3=6
f(2) = 2*2/4 + 2*f(1)=1+2=3
f(1)=1+f(0)=1
f(0)=0

I.4
i	1 2 3 4 5 6 7 8 9 10
t[i]	7,4,6,7,4,7,0,9,6,5

1, 2, 3, 8, 10

II.1.c)
citește n (număr natural nenul)
m0
┌pentru i<-n,1,-1 execută
│ citește x (număr natural)
│┌cât timp x%10 ≤ [x/10]%10 execută
││ x[x/10]
│└■
│ mm+x
└■
┌dacă m≠n atunci scrie m
│altfel scrie „egal”
└■


II.2.
struct telefon
{
 char producator;
 float dimensiune[3];
 int frecventa;
}t;

II.3.
for(i=0;i<24;i++)
  if(a[0][i]==2024 && a[3][i]==2024)
     cout<<i<<" ";

III.1.
#include<iostream>
#include <fstream>
using namespace std;

int produs(int a, int b)
{
    int p=1,d;
    for(d=1; d<=a; d++)
    {
        if((a%d==0) && (b%d==0))
        {
            p*=d;
        }
    }
    return p;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<produs(a,b);
    return 0;
}

III.2
#include<iostream>
#include <cstring>
using namespace std;

int main()
{
  int n;
  char a[101],v[101],*p,*k;
  cin>>n;
  cin.get();
  cin.getline(a,100);
  strcpy(v,a);
  p=strtok(a," ");
  while(p!=NULL){
    if(strlen(p)<n)
        cout<<p<<" ";
    p=strtok(NULL," ");
  }
  cout<<endl;
  k=strtok(v," ");
  while(k!=NULL){
    if(strlen(k)>n)
        cout<<k<<" ";
    k=strtok(NULL," ");
  }
    return 0;
}


III. 3.
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream f("bac.txt");
    int i,n1,n2,n3,x,ap[1001]= {},p1=0,p2=0,p3=0;
    f>>n1>>n2>>n3;
    while(f>>x)
        ap[x]++;
    for(i=1000; i>=10; i--)
    {
        if(ap[i]>=n1)
        {
            p1=i;
            break;
        }

    }
    for(i=p1-1; i>=10; i--)
    {
        if(ap[i]>=n2)
        {
            p2=i;
            break;
        }
    }
    for(i=p2-1; i>=10; i--)
    {
        if(ap[i]>=n3)
        {
            p3=i;
            break;
        }
    }

if(p3==0)
{
    cout<<"nu exista";
}
else
    cout<<p1<<' '<<p2<<' '<<p3;
return 0;
}
