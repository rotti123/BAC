II.3

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    int i, j, mat[6][6];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                mat[i][j]=5;
            }
            else if(i%2==0){
                mat[i][j]=4-i;
            }
            else mat[i][j]=4-j;
            cout << mat[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}

III.2
    #include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n,x,y,sol,op=0;
    char s[21];
    cin>>n;
    for(int poz=1;poz<=n;poz++)
    {
        x=0; y=0; sol=0;
        cin>>s;
        cout<<s;
        int i=0;
        while(strchr("+-*",s[i])==NULL)
        {
            x=x*10+s[i]-'0';
            i++;
        }
        if(s[i]=='+') op=1;
        if(s[i]=='-') op=2;
        if(s[i]=='*') op=3;
        i++;
        while(s[i]!='=')
        {
            y=y*10+s[i]-'0';
            i++;
        }
        if(op==1) sol=x+y;
        if(op==2) sol=x-y;
        if(op==3) sol=x*y;
        cout<<sol<<endl;
    }
    return 0;
}
/*
12*40=
1228+29=
1300-1=
7*11=
*/
III.3
    #include <iostream>
#include <cstring>
#include<fstream>
using namespace std;
int main() {
    ifstream fin("numere.in");
    int n,x,y,i,ok=0;
    fin>>n>>x;
    for(i=1;i<=x-1;i++)
    {
        ok=1;
        cout<<i<<" ";
    }
    while(fin>>y)
    {
        for(i=x+1;i<=y-1;i++)
           {
               ok=1;
               cout<<i<<" ";
           }
           x=y;
    }
    for(i=y+1; i<=n; i++)
    {
        ok=1;
        cout<<i<<" ";
    }
    if(ok==0)
        cout<<"nu exista";
    return 0;
}

/* Algoritmul este eficient din punct de vedere al memoriei 
deoarece am utilizat 5 variabile simple. 
Algoritmul are o complexitate O(n) unde n reprezinta nr din enunt.
Algoritmul trateza urmatoarele cazuri pentru doua elemente
consecutive din sir x si y: 
-daca x e primul element din sir se afiseaza continutul
intervalului [1,x)
-daca y e ultimul element din sir se afiseaza continutul
intervalului (y,n]
-pentru o pereche oarecare din interior afisam continutul
intervalului (x,y)
Am tratat si cazul care nu exista.
*/
