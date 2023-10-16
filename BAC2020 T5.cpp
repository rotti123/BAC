SI ex 2:
f(0) -> nimic
f(1) -> f(0) 1 -> 1
f(2) -> i=2 f(1) 2
        i=1 f(1) 1 ->1211 
f(3) -> i=3 f(2) 3 
        i=2 f(2) 2
        i=1 f(2) 1 ->121131211212111

 ///SI ex 3:
 {cămașă, cravată, pantaloni, pantofi, sacou, șosete}
    1        2        3          4         5      6
1...2 	2...5 	3,6...4
1 2 3 5 6 4
1 2 3 6 4 5 
1 2 3 6 5 4
1 2 5 3 6 4
1 2 5 6 3 4 
1 2 6 3 4 5<-c
1 2 6 5 3 4
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


SIII ex 3 V2
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
int x, smax=-1000, s=0;
while (cin>>x)
  {
    s+=x;
    if (s>smax)
      smax=s;
    if (s<0)
      s=0;
  }
  cout<<smax;
}
