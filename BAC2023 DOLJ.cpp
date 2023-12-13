#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int n,a[100],x;
struct unghi
{
    int g, m;
} u1,u2;

///SIII.1
int prefix(int a, int b)
{
    if(b<a*10) return 0;
    while(b>a)
    {
        b=b/10;
    }
    if(b==a) return 1;
    else return 0;
}

///SIII.2 [inceput]
int litere(char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        if(strchr("012345789",s[i])==NULL)
            return 1;  //nu este cifra, rezulta este litera
    }
    return 0;
}
int main()
{
    /**
    ///SII.2
    u1.g=12;  u1.m=56;
    u2.g=40;  u2.m=30;
    if(u1.g>u2.g) cout<<u1.g<<" "<<u1.m;
    else if(u1.g<u2.g) cout<<u2.g<<" "<<u2.m;
    else{
        if(u1.m>u2.m) cout<<u1.g<<" "<<u1.m;
        else if(u1.m<u2.m) cout<<u2.g<<" "<<u2.m;
        else cout<<"egale";
    }
    //SII.3
    int a[20][20],i,j;
    for(i=1;i<=4;i++,cout<<endl)
    for(j=1;j<=6;j++)
    {
     if(i%2==1) a[i][j]=(6-j+1)*2;
     else a[i][j]=j*2;
     cout<<a[i][j]<<" ";
    }

    //cout<<prefix(880,880);
    
    //SIII.2 [continuare]
    char text[251],*p,aux[251]= {};
    cin.getline(text,250);
    p=strtok(text," ");
    while(p!=NULL)
    {
        int k=0;
        if(litere(p)==1)
        {
            char cuv[251]={};
            for(int j=0; j<strlen(p); j++)
            {
                if(strchr("0123456789",p[j])==NULL)
                {
                    cuv[k]=p[j];
                    k++;
                }
            }
            strcat(aux,cuv);
        }
        else{//este numar
            strcat(aux,p);
        }
        strcat(aux," ");
        p=strtok(NULL," ");
    }
    strcpy(text,aux);
    cout<<text;
  */
  //SIII.3
    int x,p=1,pmax=0,poz,lun,k=0,st=-1,dr,sol;
    ifstream cin("bac.txt");
    while(cin>>x){
            k++;
        if(x==0){
          if(p>pmax){
            pmax=p;
            sol=st;
            lun=dr-st+1;
          }
          st=-1;
          p=1;
        }
        else{
            p=p*x;
            if(st==-1){
                st=k;
            }
           dr=k;
        }

    }
    if(p>pmax){
            pmax=p;
            sol=st;
            lun=dr-st+1;
          }
    cout<<lun<<" "<<sol;
    return 0;
}
/**
Algoritmul este eficient dpdv al timpului de executie
deoarece are complexitatea O(n),unde n este numarul de
elemente citite din fisier.
Este eficient dpdv al memoriei deoarece am folosit
doar 10 variabile intregi simple
Algoritmul citeste fiecare element din sir,iar in
functie de valoarea acestuia se actualizeaza produsul 
maxim si limitele secventei.
La finalul acestuia se afisaza lungimea secventeci cu
produsul maxim si prima pozitie a acestuia.
*/

/*----------------------------------------------------------*/


SIII.2
  
  #include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[250], *p, fin[250] = {};
    cin.getline(s,250);
    p = strtok(s, " ");
    while(p != NULL)
    {
        int cif = 0, lit = 0;
        for(int i = 0; i < strlen(p); i ++)
        {
            if((p[i] >= 'A' && p[i] <= 'Z') ||
                    (p[i] >= 'a' && p[i] <= 'z'))
            {
                lit = 1;
            }
            if(p[i] >= '0' && p[i] <= '9')
            {
                cif = 1;
            }
        }
        int k = 0;
        if(cif == 1 && lit == 1)
        {
            char aux[250] = {};
            for(int i = 0; i < strlen(p); i ++)
            {
                if((p[i] >= 'A' && p[i] <= 'Z') ||
                        (p[i] >= 'a' && p[i] <= 'z'))
                {
                    aux[k] = p[i];
                    k++;
                }
            }
                aux[k] = '\0';
                strcat(fin, aux);
        }
        else
        {
            strcat(fin, p);
        }
        p = strtok(NULL, " ");
        if(p != NULL) strcat(fin, " ");
    }
    strcpy(s, fin);
    cout<<s;
}

SIII.3
  #include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream cin("bac.txt");
  int x, prod = 1, prodmax = 0, st,lungime=0, stanga,poz=0,lmax=0;
  while (cin >> x) {
    poz++;
    if (x != 0) {
      prod = prod * x;
      lungime++;
    }
    if (x == 0) {
      if (prod > prodmax) {
        prodmax = prod;
        lmax=lungime;
        st = poz-lungime;
       // cout<<prodmax<<" "<<lmax<<" "<<st<<endl;
      }
      prod = 1;
      lungime=0;
    }
  }
  if (prod > prodmax) {
        prodmax = prod;
        lmax=lungime;
        st = poz-lungime+1;
  }
  cout << lmax<< " " << st;
  return 0;
}
