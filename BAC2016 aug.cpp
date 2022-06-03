SIII ex3

void duplicare(int &n){
    int nr=0, p=1, c;
    while(n>0){
      c=n%10;
      n=n/10;
      if(c%2==0){
        nr=nr+p*c;
        p*=10;

      }
      nr=nr+p*c;
      p*=10;
    }
    n=nr;

  }


SIII ex 4
    #include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
/** C1)
   m2  m1  x   (x>=m1)
       m2  m1
    m2=m1;
    m1=x;
   C2)
   m2 x m1  (x>m2)
   m2=x;
  */
int main()
{
    ifstream cin("bac.txt");
  unsigned int x, k=0, maxx1=0,maxx2=0,cnt=0;
  while(cin >> x){
    if(x%2==1){
      k++;
    }
    if(k==3){
      if(x%2==0){
        if(x>=maxx1){
          maxx2=maxx1;
          maxx1=x;
          cnt++;
        }
        else if(x>maxx2){
          cnt++;
          maxx2=x;
        }
      }
    }
    if(k>3) break;
  }
  if(cnt<2){
    cout<<"Nu exista";
  }
  else{
    cout<<maxx2<<" "<<maxx1;
  }
}


/// MAURICE 
SIII EX 3
    
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("bac.txt");
    unsigned int x,y, cnt_imp=0, m1=0,m2=0, ok;
    cin >> x;
    if(x%2==1) cnt_imp++;
    ok=0;/// presupunem ca nu exitsa 2 astfel de numere pare
    while(cin >> y){
        if(cnt_imp==3){
            if(y%2==0){
                if(m1==0 && m2==0){/// prima aparitie a maximelor
                    m1=y;
                    m2=y;
                }
                else if(y>m2){/// CAZUL 1    m1 m2 y
                    ok=1;     /// am gasit 2 astfel de numere
                    m2=m2;
                    m2=y;
                }
                else if(y>m1){///CAZUL 2  m1 y m2
                    m1=y;
                }
            }
        }
        else if(cnt_imp>3) break;/// am depasit numerele pare care sunt precedate de doar 3 numere impare
        if(y%2==1) cnt_imp++; /// contorizam aparitia numerelor impare
        x=y;
    }
    if(ok==1){
        cout<<m1<<" "<<m2;
    }
    else{
        cout<<"nu exista";
    }

    return 0;
}
