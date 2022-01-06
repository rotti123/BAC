///SIII ex 2
#include <iostream>

using namespace std;

int main() {
    int n,k,a[21][401],val=0;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        val=i-1;
        for(int j=1;j<=n*k;j++){
            if(j%k==1){
                val++;
            }
            a[i][j]=val;
            cout<<a[i][j]<<" \t";
        }
        cout<<endl;
    }
    return 0;
}

///SIII ex 3

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   int a,b,c;
   ofstream cout("bac.txt");
   cin>>b>>c;
   cout<<c<<" "<<b<<" ";
   if(c==1 && b==1){
       return 0;
   }
   while(b>1){
       a=3*b-c;
       c=b;
       b=a;
       cout<<a<<" ";
   }
   cout<<1;
    return 0;
}
/*
Algoritmul este eficient dpdv al timplului de executie deoarece are o complexitate O(log3(n)) unde n repr. ultimul termen citit.
Am rezolvat ecuatia data cu necunoscuta f(n-2) si ne folosim de relatia rezultata pentru a genera 
termenii anteriori.
Algoritmul este eficient dpdv al memoriei deoarece am folosit doar 3 variabile intregi simple.
*/
