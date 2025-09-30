1) b
2) c
i= 75 	j=30   	75
i=45	j=30	45
i=15	j=30	15	i=30	j=15
i=15	j=15	15
3) a
4) d 5
5) b


citeşte n
 (număr natural)
 m<-0; 
┌pentru x<-1,9 execută
│ cp<-n
│┌cât timp cp≠0 execută
││┌dacă cp%10=x atunci
│││ m<-m*10+x
││└■
││ cp<-[cp/10]
│└■
└■
 scrie m

SII ex 2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
   char a[21],b[21];
   cin.getline(b,20);
   int n=strlen(b);
   if(strlen(b)<3){
    strcpy(a,"nedeterminat");
   }else{
    strcpy(a,b+n-3);
   }
   cout<<a;
    return 0;
}
 

///SIII ex 2
2 2 2 2 2 
2 2 2 2 8 
2 2 2 2 2 
2 1 2 8 7 
3 5 2 1 2
 
 #include <bits/stdc++.h>
using namespace std;

int main()
{

int n,m,a[51][51], ok,sol=1;
  cin>>n;
  for(int i=1;i<=n;i++) 
    for(int j=1;j<=n;j++)
      cin>>a[i][j];
  for(int k=1;k<=n;k++){ ///marimea submatricei este k x k
    ok=1;
    for(int i=1;i<=k;i++){ ///testez submatricea 
      for(int j=1;j<=k;j++){ //daca are toate elem egale
        if(a[i][j]!=a[1][1]){
          ok=0;
        }  
      }
    }
    if(ok==1){
      sol=k;
    }
  }
  cout<<sol;
}

SIII.3
 #include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("bac.txt");
    int x,v[1001]={},i;
    while(cin>>x)
    {
      v[x]++;
    }
    for(int i =1;i<=1000;i=i+2)
    {
        for(int j=1;j<=v[i];j++)
        {
            cout<<i<<' ';
        }
    }
    for(int i =2;i<=1000;i=i+2)
    {
        for(int j=1;j<=v[i];j++)
        {
            cout<<i<<' ';
        }
    }

    return 0;
}

