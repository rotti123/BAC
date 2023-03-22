SIII 3
  #include <iostream>
#include <fstream>

using namespace std;

int nrcifre(int n) ///log10(n)+1, daca n>0
{
    int nr=0;
    while(n!=0)
        {
            nr++;
            n/=10;
        }
    return nr;
}

int main()
{
    int vM3[100]={},ve3[100]={},x,ok=0,pre,i,apmax=0;
  //vM3-vector aparitii numere cu mai mult de 3 cifre
    ifstream f("bacul.txt");
  //ve3-vector aparitii numere cu 3 cifre
    while(f>>x)
    {
        pre=x;
        while(pre>99)      //se gaseste prefixul(primele 2 cifre)
            pre/=10;
        if(nrcifre(x)>3)   //daca nr de cifre e mai mare decat 3, se creste vectorul de aparitii pe pozitia prefixului in vM3
            vM3[pre]++;

        if(nrcifre(x)==3)      ////daca nr de cifre e 3, se creste vectorul de aparitii pe pozitia prefixului in ve3
            ve3[pre]++;
    }
    for(i=99;i>=10;i--)
      {
        if(ve3[i]>0)
          if(vM3[i]>apmax)
            apmax=vM3[i];
      }
    for(i=99;i>=10;i--)
      {
        if(vM3[i]==apmax && ve3[i]>=1)    //se afiseaza descrescator valorile cu aparitii maxime in vM3 si cu cel putin o                                                 aparitie in ve3
        {
            cout<<i<<" ";
            ok=1;
        }
      }

    if(ok==0)       //tratarea cazului nu exista
        cout<<"nu exista";
    return 0;
}
