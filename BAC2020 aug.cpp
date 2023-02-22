1b 2c 3c 4d 5b
II.2
struct procesor{
	char producator;
	unsigned int frecventa;
	float pret;
}p[20];

II.3
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  int a[6][4], i, j, k;
  for(i = 0; i < 6; i++ ){
    for(int j = 0; j < 4; j ++){
      cin >> a[i][j];
    }
  }
    for(i = 0; i < 5; i++){
      if(a[i][2] % 2 == 0){
        for(int j = i + 1; j < 6 j ++){
          if(a[j][2] % 2 == 0 && a[j][2] < a[i][2]){
            k = a[i][2];
            a[i][2] = a[j][2];
            a[j][2] = k;
          }
        }    
      }
    }
  for(int i = 0; i < 6; i ++){
    for(int j = 0; j < 4; j ++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

III.1

#include <iostream>
using namespace std;

int sumdiv(int x){
  int sum=x;
  for(int i=1; i<=x/2; i++){
    if(x%i==0){
      sum=sum+i;
    }
  }
  return sum;
}

int kpn(int a, int b, int k){
  int sumd=0, c=0;
  for(int x=a; x<=b; x++){
    sumd=sumdiv(x);
    if(sumd%2==x%2){
      c++;
    }
    if(c==k){
      return x;
    }
  }
  return -1;
}

int main() {
 int a,b,k;
  cin>>a>>b>>k;
  cout<<kpn(a,b,k);


}


III.2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100], aux[100], fin[100]={}, *p;
    int ok = 0,lung;
    cin.getline(s,100);
    p = strtok(s, " ");
    while(p != NULL){
        strcpy(aux, p);
        lung = strlen(aux);
        if(lung % 2 == 1){
            for(int i = 0; i < lung / 2; i++){
                char interchange = aux[i];
                aux[i] = aux[lung - i - 1];
                aux[lung - i - 1] = interchange;
            }
          if(strcmp(p, aux) != 0){
            ok = 1;
          }
         }
        // cout<<aux<<endl;
          strcat(fin,aux);
          strcat(fin," ");
       // cout<<fin<<endl;
      p = strtok(NULL, " ");
    }
  if(ok == 0) cout << "nu exista";
  else {
    strcpy(s, fin);
    cout << s;
  }
    return 0;
}


III.3
#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("bac.txt")

int main() {
    int x, minn=100, maxx=-1, c=0, a, b;
    while(cin>>x){
        if(x/10!=0 && x/100==0){ // x>=10 && x<=99
            c++;
            if(minn>x){
                minn=x;
            }
            if(maxx<x){
                maxx=x;
            }
        }
    }
    a=minn-1;
    b=maxx+1;
    if(c==0){
      cout<<"nu exista";
    }
    else{
      cout<<a<<" "<<b;
    }
    return 0;
}
