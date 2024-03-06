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
 int n,lung,ok=1;
  char s[101],cuv[100][11],*p, sol[101]={};
cin>>n;
cin.ignore();///ignor Enter dupa n
  for(int i=0;i<n;i++){
    cin>>cuv[i];
  }
  cin.ignore(); ///ignor Enter dupa ultimul cuvant
  cin.getline(s,100);
  p=strtok(s," ");
  while(p!=NULL){
    lung=strlen(p);
    if(p[0]=='*'){ ///caut cuvant pentru masca *****
      ok=0; //pp ca nu am gasit cuvantul de lungime lung
      for(int i=0;i<n;i++){
        if(strlen(cuv[i])==lung){
          strcat(sol,cuv[i]);
          strcat(sol," ");
          ok=1;
          break;
        }
      }
      if(ok==0){
        cout<<"imposibil";
        return 0;
      }
    }
    else{
      strcat(sol,p);
      strcat(sol," ");
    }
    p=strtok(NULL," ");
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

