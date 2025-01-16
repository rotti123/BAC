#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{

    int x,p=1,pmax=-1,i=0,poz=0,stSecv=0,lung=0;
    while(fin>>x)
    {
        i++;
        if(x>0)
        {
            if(poz == 0)
            {
                poz=i;
            }
            p=p*x;
        }
        else
        {
            if(p>pmax)
            {
                pmax=p;
                stSecv = poz;
                lung=i-poz ;
            }
            poz=0;
            p=1;
        }


    }

     if(p>pmax)
            {
                pmax=p;
                stSecv = poz;
                lung=i-poz ;
            }

    cout<<lung<<" "<<stSecv;
}
    /*
    Algoritmul citeste fiecare valoare pe rand din fisier si memoreaza
    in variabile pozitia de inceput a secventei, 
    produsul si lungimea secventei curenta si 
    in momentul in care momentul in care numarul citit este 0 se incheie
    secventa curenta si se trece la urmatoarea. 
    In momentul in care s-a gasit o noua secventa de produs maxim se 
    actualizeaza pozitia de inceput, lungimea secventei de produs maxim
    si se actualizeaza produsul maxim.
    Acest algoritm este eficient  din punct de vedere al 
    memoriei deoarece are o complexitate O(1). 
    Complexitatea de timp este liniara O(n), unde n reprezinta numarul
    de elemente din fisier.
    
    */

