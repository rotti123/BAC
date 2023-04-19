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
