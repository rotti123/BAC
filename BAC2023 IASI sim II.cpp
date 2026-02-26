SIII 
SIII.1
  #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int nrc(int x)
{
     if(x==0) return 1;
     int nr=0;
    while(x)
    {
        nr++;
        x/=10;
    }
    return nr;
}
void ecran(int n)
{
    int copie,p=1,pref=n,suf=n,st=1;
    copie=n;
    while(copie>9)
    {
        p*=10;
        copie/=10;
    }
    while(pref!=0)
    {
        cout<<pref;
        for(int i=1;i<=st;i++)
            cout<<"*";
        if(nrc(pref)!= nrc(suf))
        {
            int d;
            d=nrc(pref)-nrc(suf);
            for(int i=1;i<=d;i++)
                cout<<"0";
        }

        cout<<suf;
        cout<<endl;
        pref/=10;
        st+=2;
        suf%=p;
        p/=10;

    }
    for(int i=1;i<=st;i++)
        cout<<"*";


}
int main()
{
   int n;
   cin>>n;
   ecran(n);


    return 0;
}
SIII.
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
  char s[101];
  char cuv[11];
  cin.getline(cuv, 11);
  cin.getline(s, 101);

  int count = 0;
  char m[101][101];

  char *ptr;
  ptr = strtok(s, " ");


  while(ptr!=NULL){

    strcpy(m[++count], ptr);

    ptr = strtok(NULL, " ");
  }

bool ok = false;

  for(int i = 2; i<count; i++){

    if(strcmp(m[i], cuv) == 0 ){
      ok =1;

      cout<<m[i-1]<<" "<<m[i+1]<<endl;
    }
  }

  if(!ok){
    cout<<"NU EXISTA"<<"\n";
  }


 return 0;
}
