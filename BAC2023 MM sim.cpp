#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
using namespace std;
void numere_dure(int n){

int a,b,k=0;
  for( a=3; a<=8; a++){
     for ( b=3; b<=8; b++){
       if(a*b>=18){
         k++;
       }
     }
  }
     if(k<n){
       cout<<"Nu exista";
     }
  else{
        k=0;
    for( a=3; a<=8; a++){
     for ( b=3; b<=8; b++){
       if(a*b>=18){
         k++;
         if(k<=n){
           cout<<a<<b<<" ";
         }
         else{
           return;
         }
       }
     }
  }
  }



}

int main()
{
  int n,a,b,k=0;
  cin>>n;
  numere_dure(n);


 return 0;
}
