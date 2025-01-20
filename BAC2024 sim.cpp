SIII.1
  #include <iostream>
using namespace std;
int Impare(int n){
  int cif, nrn=0,k=0,p=1;
  while(n!=0){
    cif=n%10;
    n=n/10;
    if(cif%2==0){
      nrn=nrn+cif*p;
      p=p*10;
    }
    else{
      nrn=nrn+cif*p;
      p=p*10;
      nrn=nrn+cif*p;
      p=p*10;
      k++;
    }
  }
  if(k==0){
    return -1;
  }
  else{
    return nrn;
  }
}

int main()
{
int n;
  cin>>n;
  cout<<Impare(n);

}

SIII ex 2
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,ok=0;
    char a[101][11]={},s[11],t[101];
    char *p,sol[101]={};
    cin>>n;
    //cin.ignore();
    for(int i=0;i<=n-1;i++){
        cin>>a[i]; ///retin cuvintele in matrice
    }
    cin.ignore();
    cin.getline(t,100);
    p=strtok(t," "); ///preiau primul cuvant din t
    while(p!=NULL)
    {
        if(p[0]=='*') ///p este o masca ****
        {
            ok=0;
            for(int i=n-1;i>=0;i--)
            if(strlen(a[i])==strlen(p))
            {
                strcat(sol,a[i]);
                strcat(sol," ");
                ok=1;
                break;
            }
            if(ok==0)
            {
                cout<<"imposibil";
                return 0;
            }
        }
        else ///p este un cuvant
        {
            strcat(sol,p);
                strcat(sol," ");
        }
        p=strtok(NULL," ");///urmatorul cuvant

    }
cout<<sol;
return 0;
}




SIII ex 3
  #include <iostream>
#include <fstream>
using namespace std;


int main()
{
 ifstream cin("bac.txt");
  int v[1001]={},x;
  while(cin>>x){
    v[x]++;
  }
  for(x=1;x<=1000;x++){
    if((v[x]!=0)){
   //  cout<<x<<" "<<v[x]<<endl;
     if((v[x]%2==x%2) && (v[x]<=x)){
       cout<<"DA";
       return 0;
     }
    }
  }
  cout<<"NU";
  return 0;
}

