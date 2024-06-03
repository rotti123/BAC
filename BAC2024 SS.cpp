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
