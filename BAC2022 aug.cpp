II.3
   #include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct meteo 
{ int an, temperatura; 
}x;
/*
<10 RACOROS
>=10 && <=11 NORMAL
>11 CALDUROS
  */
int main() {
if(x.temperatura > 11) cout << "CALDUROS";
else if(x.temperatura < 10) cout << "RACOROS";
else cout << "NORMAL";
 
  return 0;
}

III.1
   void schimb_cata(int &n, int x, int p){
  int e=1,st,dr;
  for(int i=1; i<=p; i++){
    e=e*10;
  }
  dr=n%e;
  st=n/e;
  n=(st/10*10+x)*e+dr;
}


III.2
   #include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[51],voc[6]="aeiou",vp;
    cin.getline(s,50);
    for(int i=0;i<strlen(s);i++){
       if(strchr("aeiou",s[i])==NULL){ ///test s[i] consoana
         for(int j=4;j>=0;j--){
           if(voc[j]<s[i]){
             s[i]=voc[j];
             break;
           }
         }
       }
    }
  cout<<s;
    return 0;
}

III.3
   
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main ()
{
  ifstream cin("bac.txt");
  ofstream cout("bac.out");
  
  int x, y, lung=1, lmax=0, k=0;
  cin>>x;
  while(cin>>y)
    {
      if(x%2==y%2)
        lung++;
      else
      {
        if(lung>lmax)
        {
          lmax=lung;
          k=1;
        }
        else
        if(lung==lmax)
          k++; 
        lung=1; //secventa il contine doar pe y 
      
      }
      x=y;
    }
   if(lung>lmax)
        {
          lmax=lung;
          k=1;
        }
        else
        if(lung==lmax)
          k++;
  cout<<k<<" "<<lmax;
  return 0;
}

/*** V2 **/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int nr=1,maxim=0,a,b,nrmax=0;
    f>>a;
    while(f>>b)
    {
        if(a%2==b%2)
        {
            nr++;    //nr=nr de cifre in sir
            if(nr>maxim)
                {maxim=nr;  //maxim de cifre cu aceeasi paritate gasit
                nrmax=1;    //nrmax nr de siruri cu aceeasi paritate maxima
                }
            else if(maxim==nr)
                    {nrmax++;}
        }
        else
            nr=1;
        a=b;

    }
    cout<<nrmax<<" "<<maxim;
}

//

