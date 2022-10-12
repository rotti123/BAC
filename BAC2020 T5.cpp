
///SIII ex 3
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  int x,s=0,Smax=-100000000;
  while(cin>>x){
    if(s>=0){
     s=s+x;
    }
    else{
      s=x;
    }
    if(s>Smax){
      Smax=s;
    }
     
  }
  cout<<Smax;
}

/* Programul este eficient dpdv al timpului de exec
deoarece are o complexitate O(n), unde n repr nr de elemente ale sirului  
Programul este eficient dpdv al mem deoarece am folosit doar trei var intregi simple.

Descriere algoritm
Suma curenta se actualizeaza astfel daca suma anterioara este negativa, suma va deveni ultimul element citit, altfel se adauga elementul curent la suma. 
*/
