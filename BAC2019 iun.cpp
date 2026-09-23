
SII ex 3
fig.raza = 1;
fig.centru.x = 0;
fig.centru.y = 0;

SIII ex 2
 #include <iostream>

using namespace std;

int main()
{int a[100][100],m,n,ok=1;
cin>>m>>n;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];

    }
}
for(int j=1;j<=n/2;j++){
    for(int i=1;i<=m;i++){
        if(a[i][j]!=a[i][n-j+1]){
            ok=0;
        }
    }
}
if(ok==1){
    cout<<"DA";
}
else cout<<"NU";
   return 0;
}

SIII ex 3
  #include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x,ok=1,maxx=0;
    ifstream cin("BAC.txt");
    while(cin>>x){          //cat timp citim o valoare pentru x
        if(x>maxx){         //verificam daca e mai mare decat maximul
            maxx=x;
            ok=1;
            cout<<x<<" ";
        }
        else if(x==maxx && ok==1){  //sau daca este egal cu maximul anterior
            cout<<x<<" ";           //si nu exista alte numere intre ele
        }
        else if (x!=maxx){          //daca intre maximul anterior si
            ok=0;                   //alte posibile maxime exista alt numar
        }                           //nu afisam aceste elemente
    }
    return 0;
}/*din punct de vedere al timpului de executie,programul are o complexitate
O(n) unde n este numarul de valori citite
din punct de vedere al memoriei,programul este eficient pentru ca folosim
3 variabile simple de tip intreg
*/
