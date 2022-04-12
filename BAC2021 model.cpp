///SIII ex1

#include <iostream>
#include <fstream>

using namespace std;

void prime(int n,int &x,int &y)
{  x=0;
   y=0;
  int k=n-1;
  bool ok=1;
  while(k>1){
    for(int d=2;d*d<=k;d++){
      if(k%d==0){
        ok=0;
        break;
      }
    }
    if(ok==1 && y==0) y=k;
    else if(ok==1){
      x=k;
      return;
    }
    ok=1;
    k--;
  }
}

int main()
{  int n,x,y;
  cin>>n;
  prime(n,x,y);
  cout<<x<<" "<<y;
  return 0;
}

///SIII ex 2
#include <iostream>
#include <fstream>

using namespace std;

int main()
{  int n,m,k,a[100][100];
  cin>>m>>n;
  k=0;
  for(int i=m;i>=1;i--){
    for(int j=n;j>=1;j--){
      a[i][j]=k*k;
      k=k+2;
    }
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

///SIII ex3
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int a[101]={},k,x,y,maxim=0,nr=0;
  ifstream cin("cheltuieli.in");

  while(cin>>k>>x>>y){
    a[k]+=x*y;
  }
  for(int i=1;i<=100;i++){
    if(a[i]>maxim){
      maxim=a[i];
      nr=1;
    }else if(a[i]==maxim){
      nr++;
    }
  }
  cout<<maxim<<" "<<nr;
  return 0;
}


/*
Algoritmul este eficient din punct de vedere al timpului de
executie deoarece are complexitatea O(n) unde n este numarul
de randuri din fisierul "cheluieli.in".
Citim cate un triplet, apoi retinem intr-un vector a suma 
vanzarilor asociate unui tip de produs. Apoi cautam maximul
din acest vector si cate produse au suma vanzarilor acest
maxim.Afisam maximul si numarul de produse care au ca suma
a vanzarilor acest maxim.

*/
