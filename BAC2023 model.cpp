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

II.3
  plantau fistic
01234567890123
s1+7 =" fistic"

p=s1+7 -s1 =7 [p]
s1+p+1=s1+8="fistic"
s2=s1+8="fistic"  [s2]
         012345
s2+2="stic"
"u fistic" <- "stic"
s1+p-1=s1+6 <- "stic"

plantastic [s1]
0123456789
s1="plantastic"
s2+1="istic" <-"antastic"
s1+2 = "antastic"
s2=fantastic

7fantastic


