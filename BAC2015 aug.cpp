II 5.
#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char a[101],n;
  int k=0,ok=1;
  cin.get(a,100);
  for(int i=0;i<strlen(a);i++){
    if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
      k++;
    }
    if(strchr("aeou",a[i])!=NULL){
      ok=0;
    }
  }
  if(k==0){
    ok=0;
  }
  if(ok==0){
    cout<<"NU";
  }
  else{
    cout<<"DA";
  }
}

III.3 fara functie!!!!!
  #include <iostream>
using namespace std;
int main() {
  int n,c,k=0;
  cin>>n;
  while(n!=0){
    c=n%10;
    n=n/10;
    if(c==2||c==3 || c==5 || c==7){
      k++;
        
    }
  }
  cout<< k; 
    
}

SIII.4

  #include <iostream>
#include <fstream>
using  namespace std;
ifstream f("BAC.TXT");
/// Sol=s_imp1*s_pare2 + s_pare1*s_imp2;
int main()
{
    int n,x,s_imp1=0,s_imp2=0,s_pare1=0,s_pare2=0;
  f>>n;
  for(int i=1; i<=n; i++) ///primele n valori
    {f>>x;
     if(x%2==0)
       s_pare1=s_pare1+x;
     else
       s_imp1=s_imp1+x;
    }
  for(int i=n+1; i<=2*n; i++) ///urmatoarele n valor
  {f>>x;
   if(x%2==0)
     s_pare2=s_pare2+x;
   else
     s_imp2=s_imp2+x;
  }
    cout<<s_imp1*s_pare2 + s_pare1*s_imp2;
}

/*
1 2 0 0 5 | 4 2 3 1 0

Caz 1) I*P

1*4 + 1*2 + 1*0 + 5*4 + 5*2 + 5*0=

1*(4+2+0) + 5*(4+2+0) = (1+5)*(4+2+0)
=s_imp1*s_pare2

Caz2) P*I
=s_pare1*s_imp2
Sol=s_imp1*s_pare2 + s_imp2*s_pare1;
*/

