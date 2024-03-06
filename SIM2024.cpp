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
