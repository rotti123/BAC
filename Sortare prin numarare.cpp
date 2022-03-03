#include<iostream>
#include <fstream>
using namespace std;

int main()
{
  int a[10]={}; /// initializam toate pozitii cu 0
  int n, x,k=0;

  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>x; //citim o valoare x
    a[x]++; //crestem frecventa lui x
  }
//Sortare prin numarare -> O(k*n)
  for(int i=0;i<=9;i++){ ///presunem ca avem k elem in interval
   // cout<<"val:"<<i<<" frecv:"<<a[i]<<endl;
   for(int j=1;j<=a[i];j++){
       cout<<i<<" ";
   }
  }
  
    

    return 0;
}
