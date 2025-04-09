1a 2b 3d 4d 5c

f(9) -> x=22 f(22) 22

i 1 2 3 4 5 6 7 8 9 10   16 17
m 1 1 3 1 5 3 7 1 9 5
  _ 1 _ 1 _ 3 _ 1 _ 5 .. 1


citeşte n 
(număr natural, n≥2) 
 
┌pentru  i1,n execută 
│ mi 
│┌cât timp m%2=0 execută 
││ m[m/2] 
│└■ 
│┌dacă m≠i atunci 
││ scrie m,’ ’ 
│└■ 
│ 
└■
1 2
2 3
2 4
4 5
4 6
5 6

1: 2
2:3,4
3:2
4:2,5
5:4,6
6:5

II.3
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    int i,c;
    c=0;
    for(i=1; i<=10; i++)
    {
        cin>>s;
        if(strlen(s)==2 &&
           ((strchr("aeiou",s[0])!=NULL && strchr("aeiou",s[1])==NULL)||
           (strchr("aeiou",s[0])==NULL && strchr("aeiou",s[1])!=NULL)))
            c=1;
    }
    cout<<c;


}

III.1
V1.
  #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int fulg(int n){
    int val,nrc,ap[10]={};
    val=n;
    if (n==0){
        return 0;
    }
    nrc=log10(n)+1; /// calculam nr. de cifre al unui nr.!!!
    if (nrc!=9){
        return 0;
    }
    while (val>0){
        ap[val%10]=1;
        val/=10;
    }
    if (ap[0]==1){
        return 0;
    }
    for (int i=5;i<=9;i++){
        if (ap[i]==1){
            return 0;
        }
    }
    for (int i=1;i<=4;i++){
        if (ap[i]==0){
            return 0;
        }
    }
    return 1;
}


int main()
 {
    cout<<fulg(12344321);
        return 0;
}

  V2.
#include <iostream>
#include <cstring>
using namespace std;

int fulg(int n){
    int c,k=0,v[5]={};
    while(n!=0){
        c=n%10;
        n=n/10;
        k++;
        if(c>4 || c==0){
            return 0;
        }
        v[c]=1;//marcam aparitia lui c
    }
    for(c=1; c<=4; c++){
        if(v[c]==0){
            return 0;
        }
    }
    return k==9;
}

int main()
{
    int n;
    cin>>n;
    cout<<fulg(n);
}

III.2
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    int n,a[51][51],m;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                if(j>=10){
                    a[i][j]=i*100+j;
                }
                else{
                    a[i][j]=i*10+j;
                }
            }
            else{
                if(i>=10){
                    a[i][j]=j*100+i;
                }
                else{
                    a[i][j]=j*10+i;
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


III.3
V1.
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream cin("bac.in");
   int x, cmax=0, c1, c2, n1=-1, n2=-1;
   while(cin >> x){
        if(x<=9){
            if(x>cmax){
                n1=x;
                cmax=x;
                n2=-1;
            }
            else if(x==cmax){
                n2=x;
            }
        }
        else{
            c1=x%10;
            c2=x/10;
            if(c1>cmax || c2>cmax){
                n1=x;
                cmax=max(c1, c2);
                n2=-1;
            }
            else if(cmax==max(c1, c2)){
                n2=x;
            }
        }
   }
   if(n2==-1){
    cout << "nu exista";
   }
   else{
   cout << n1 << " " << n2;
   }
    return 0;
}

  V2.
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream f("numere.in");
int main()
{int cm=0, x, z, a, b=-1, cif;
 // cm este cifra maxima din tot sirul, iar cif este cifra maxima al lui x
    while (f>>x)
    {
        z=x;
        cif=0;
        while (z!=0)
        {
            if (z%10>cif){
                cif=z%10;

            }
            z=z/10;

        }
        if (cif>cm)
        {
            cm=cif;
            a=x;
            b=-1;
        }
        else
            if (cif==cm)
        { b=x;

        }
    }
    if (b==-1)
        cout<<"nu exista";
         else
            cout<<a<<" "<<b;

    return 0;
}
