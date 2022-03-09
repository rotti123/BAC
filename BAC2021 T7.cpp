///SIII ex 1
#include <iostream>

using namespace std;
void afisare (int x, int y, int k)
{
    int cntr=0;
    for (int i=x; i<=y; i++)
    {
        cout<<i<<' ';
        cntr=cntr+1;
        if (cntr%k==0)
        {
            cout<<"* ";
        }
    }
    if (cntr%k!=0)
    {
        cout<<"*";
    }
}
int main() {
    int x,y,k;
    cin>>x>>y>>k;
    afisare (x,y,k);
    
    
    
    return 0;
}

///SIII ex 2
#include <iostream>
using namespace std;
int main() {
  int x, aux=0, n=0,a[11][11]={};
  cin>>x;
  aux=x;
  while(aux!=0){
    n++;
    aux=aux/10;
  }
  for(int j=n; j>=1; j--){
    for(int i=n; i>=1; i--){
      a[i][j]=x%10;
    }
    x=x/10;
  }
  for(int i=1; i<=n; i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}

///SIII ex 3
#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream cin("bac.txt");
  int v[5]={}, x, ok=0;
  while(cin>>x){
    if(x%2==0){
      ok=1;
      v[x/2]++;
    }
  } 
 if(ok==0) cout<<"Nu exista";
 else{                            ///Cifrele pare cif: 0 2 4 6 8
   for(int cif=0; cif<=8; cif+=2){///Codif cif/2     : 0 1 2 3 4
     for(int i=1; i<=v[cif/2]; i++){
       cout<<cif<<" ";
     }
   }
 }
}
///SIII ex 1
  if(e.dataNasterii.an>dataEveniment.an){
    cout<<"ulterior";
  }
  else if(e.dataNasterii.an==dataEveniment.an){
    if(e.dataNasterii.luna>dataEveniment.luna){
      cout<<"ulterior";
    }
    else if(e.dataNasterii.luna==dataEveniment.luna){
      if(e.dataNasterii.zi>dataEveniment.zi){
        cout<<"ulterior";
      }
      else 
        cout<<"nu";
    }
    else cout<<"nu"; 
  }
  else 
    cout<<"nu";

///  (づ｡◕‿‿◕｡)づ
///  ¯\_(ツ)_/¯


///SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int x, a[11][11],n=0,nr;
  cin>>x;
  nr=x;
  while(nr){
     nr=nr/10;
     n++;
  }
  for(int j=n; j>=1; j--){
    for(int i=1; i<=n; i++)
        a[i][j]=x%10;
    x=x/10;
  }
  for(int i=1; i<=n; i++,cout<<endl)
    for(int j=1; j<=n; j++)
        cout<<a[i][j]<<" ";
    return 0;
}

