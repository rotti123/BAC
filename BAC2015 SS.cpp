SII ex 5
  int main() {
    char s[101]={},*p;
    cin.getline(s,100);
    p=strtok(s," ");
    while(p!=NULL){
        if(p[0]>='A' && p[0]<='Z'){
            cout<<p[0];
        }
        p=strtok(NULL," ");
    }
    return 0;
}

SIII ex 3
#include <iostream>
#include <cstring>
using namespace std;
  
int DivImparNaiv(int a,int b){
    int d,sol=0;
    for(d=1;d<=a;d+=2){
        if(a%d==0 && b%d==0){
            sol=d;
        }
    }
    return sol;
}

int DivImparEuclid(int a, int b)
{
    int r;
    while(b!=0){
            r=a%b;
            a=b;
            b=r;
    }
    while(a%2==0){
        a/=2;
    }
    return a;
}

SIII ultima

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


int main() {
    int p=-1,ip=-1,x,ok=1;
    ifstream cin("weekend.in");
    //ofstream cout("weekend.out");
    while(cin>>x){
        if(x%2==0){
            if(p==-1)   p=x;
            else if(x<p){
                ok=0;
                break;
            }
            p=x;
        }
        else{
            if(ip==-1)  ip=x;
            else if(x>ip){
                ok=0;
                break;
            }
            ip=x;
        }
    }
    if(ok==1){
            cout<<"DA";
    }
    else    cout<<"NU";
    return 0;
}
/*Programul este eficient din punct de vedere al timpului datorita complexitatii
O(n) unde n este numarul de citiri ale lui x.
Programul este eficient din punct de vedere al memoriei pentru ca am declarat
4 variabile simple de tip int.
Pentru fiecare element citit x, testam paritatea si verificam daca se afla in ordinea ceruta.
*/
