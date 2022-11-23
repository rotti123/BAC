II.2
  #include <iostream>
#include <cstring>
using namespace std;

struct echipa
{ char nume[50];
 int rezultat;
};
struct echipa c[3];

int main() 
{
  echipa aux;
  strcpy(c[0].nume,"Vatican");
  strcpy(c[1].nume,"Anglia");
  strcpy(c[2].nume,"Romania");
  c[0].rezultat=1;
  c[1].rezultat=2;
  c[2].rezultat=10;
  for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
      if(c[i].rezultat<c[j].rezultat){
        aux=c[i];
        c[i]=c[j];
        c[j]=aux;
      }
    }
  }
  for(int i=0;i<3;i++){
    cout<<c[i].nume<<" ";
  }
  return 0;
}
