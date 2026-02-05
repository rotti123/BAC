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

