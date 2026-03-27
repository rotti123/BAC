#include <iostream>

using namespace std;
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int a[505][505]={},n,m,sol=0;

/**
Avem o matrice cu n linii si m coloane.
Doresc sa stiu cate celule
(elemente din matrice) au valorile egale cu
ale vecinilor. In situatia in care o celula
este pe bordura (prima/ultima linie/coloana)
atunci se ignora vecinul ce lipseste.

Ex:
6 5
0	1	9	8	8
1	1	1	2	8
3	1	2	2	2
3	3	4	2	7
3	4	4	4	6
5	5	4	6	6

R: 6
*/

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }


   for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int ok=1; ///pp ca am toti vecinii egali cu el
            for(int k=0;k<=3;k++){
                int newi,newj;
                newi=i+di[k];
                newj=j+dj[k];
                if(1<=newi && newi<=n &&
                   1<=newj && newj<=m &&
                   a[i][j]!=a[newi][newj] ){
                    ok=0;
                }
            }
            if(ok==1) sol++;

        }
   }cout<<sol;
    return 0;
}
