///SIII ex1
#include <iostream>

using namespace std;
void fii(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<"("<<i<<' '<<n/i<<") ";
        }
    }    
}

int main() {
    int n;
    cin >>n;
    fii(n);
    return 0;
}

///SIII ex 2 V1
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

char s[100], a[100];

int main ()
{
 // ifstream cin("bac.txt");
 // ofstream cout("bac.out");
    cin.getline (s, 100);
    int l = strlen (s), k = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '-')
            {
                while (s[i] != ' ') {
                i++;
                }
                i--;
            }
        else
        {
          a[k] = s[i];
          k++;
         // cout << s[i];
          }
    }
  strcpy(s,a);
  cout<<s;
}


///SIII ex 2 V2
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char s[101],a[101]={};
    cin.getline(s,101);
    char *p;
    p=strtok(s," ");
    while(p!=NULL){
        if(p[0]!='-'){
            strcat(a,p);
        }
        strcat(a," ");
        p=strtok(NULL," ");
    }
   strcpy(s,a);
   cout<<s;
    
   
    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;


int main() {
    //ifstream cin("bac.in");
    int x,m1=0,m2=0,m3=0;
    while(cin>>x){
        if(x%100==20){
            if(x>m3){
                m1=m2;
                m2=m3;
                m3=x;
            }
            else if(x>m2){
                m1=m2;
                m2=x;
            }
            else if(x>m1){
                m1=x;
            }
        }
    }
    cout<<m1<<" "<<m2<<" "<<m3;
    return 0;
}
/*
Programul este eficient dpdv al timpului de executie deoarece are o complexitate O(n),
unde n reprezinta nr elementelor din sir
Programul este eficient dpdv al memoriei, deoarece folosim doar 4 variabile intregi simple
Consideram m1,m2,m3 cele 3 valori cerute,iar x un nr oarecare
Tratam cele 3 situatii posibile in aceasta ordine: x>m3, x>m2, x>m1 
In functie de caz vom face schimbarile necesare
*/
