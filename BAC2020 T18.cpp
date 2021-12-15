SI--> SII
1d 2c 3a 4d 5b
1 2 3 4 5 6 7 8 9 10
5,1,10,7,0,4,1,7,4,5

i=1	k=3
3 2 1 1 2 3
i=2	k=2
2 1 1 2
R: 3 2 1 1 2 3 2 1 1 2 
f(23575209) = 1 + f(235752)
f(235752) = 0 +f(2357)
f(2357) = 1 + f(23)
f(23) = 1 + f(0)


i	j	a[i][j]
0 	0	0
1	1	2
2	2	0
3	3	6
4	4	0
5	5	10
//##########################################################
SIII ex 1

#include <iostream>

using namespace std;

void suma(int n, int &s){
    int c;
    s=0;
    int vf[10]={};
    while(n!=0){
        c=n%10;
        n/=10;
        if(c%2==0){
            vf[c]=1;
        }
    }
    for(int i=0;i<=8;i+=2){
        s=s+vf[i]*i;
        /*
        sau
        if(v[i]!=0){
            s=s+i;
        */
    }
}

int main()
{
 int n=67638825,s;
    suma(n,s);
    cout<<s;
}


#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[21][21] = {}, model[20] = {}, *p;
    int n, k;
    bool ok = false;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    strcpy(model, s[k - 1]);
    for(int i = 0; i < n; i++) {
        if(i == k - 1) continue;
        p = strstr(s[i], model);
        if(p != NULL) {
            if(strcmp(model, p) == 0) {
                ok = true;
                cout << s[i] << " ";
            }
        }
    }
    if(ok == false) cout << "nu exista";
    return 0;
}

///SIII ex3
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

int main() {
    int st,dr,lmax=-1,lung=0;
    int x;
    int k=0;
    while(fin >> x){
        if(x%10==0){
        lung++;
        }
        else{
            if(lung>lmax){
                lmax=lung;
                k=1;
            }
           else if(lung == lmax){
            k++;
           }
            lung=0;
        }
    }
    if(lung>lmax){
        if(lung>lmax){
                lmax=lung;
                k=1;
            }
           else if(lung == lmax){
            k++;
           }
    }
    cout<<lmax<<" "<<k;
}
//Astept variantele voastre!!!!
//V1. Patricia

///
/*
Algoritmul verifica divizibilitatea fiecarui element cu 10.

*/

