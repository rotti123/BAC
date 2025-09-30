SIII. 3.
  #include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
  ifstream cin("bac.in");
  int minz,minp,x,poz=0,a=0,b=0,ok=0,sum=0,sol=0;
  cin>>minz>>minp;
  while(cin>>x){
    poz++;
    if(ok==0){
        if(x>=minz){
            a=poz;
            b=poz;
            sum=x;
            ok=1;
        }
        else {
            if(b-a+1>=2&& sum>=minp){
                cout<<a<<" "<<b<<" "<<sum<<endl;
                a=0;
                b=0;
                sum=0;
                sol=1;
            }
        }
    }
    else{
       if(x>=minz){
        b=poz;
        sum=sum+x;
       }
       else{
        ok=0;
        if(b-a+1>=2&& sum>=minp){
            cout<<a<<" "<<b<<" "<<sum<<endl;
            sol=1;
        }
       }
    }
  }
  if(sum >= minp && b - a + 1 >= 2)
    cout << a << " " << b << " " << sum;
    if(sol==0){
        cout<<"nu exista";
    }
}

/*
este eficient dpdv al memoriei pentru ca am folosit 
8 variabile intregi simple.
este eficient dpdv a timpului deoarece are o complexitate O(n)
unde n reprezinta numarul de zile.
gasim un interval valid
calculam suma zilelor din interval
cautam urmatorul interval
tratam cazul in care nu avem un caz valid
*/


