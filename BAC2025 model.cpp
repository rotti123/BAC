SIII. ex 3
  #include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int x,a,b,id1=-1,id2=-1;
    fin>>x>>a;
    while(fin>>b){
        if(a%10000==x && b%10000==x){ ///a si b sunt doua coduri consecutive
            id1=a/10000;
            id2=b/10000;
        }
        a=b;
    }
    if(id1==-1)
        cout<<"Nu exista";
    else
        cout<<id1<<" "<<id2<<" ";

}
/**
Algoritmul este eficient dpdv al timpului deoarece are o complexitate
O(n), unde n reprezinta numarul de detinatori auto din fisier.
Este eficient dpdv al memoriei pentru ca am folosit 5 variabile
 intregi simple.
 Pentru 2 coduri consecutive a si b testam daca sunt construite 
 in anul x si retinem in caz afirmativ id-urile detinatorilor.
 Tratam si cazul particular cand nu exista.
 */
