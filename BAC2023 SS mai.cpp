SII. 3
  #include <iostream>
#include <string.h>
using namespace std;

int main() {
    char s[21];
    cin.getline(s,21);
    for(int k = strlen(s) - 1; k >= 0; k --){
        if(s[0] == s[k]){
            int i = 0;
            while(i <= k){
                cout << s[i];
                i ++;
            }
            cout << " ";
        }
    }
    return 0;
}
SIII.1
  #include <iostream>
#include <string.h>
using namespace std;

void Putere(int n, int &x, int &p){
  for(int i=2; i<=n; i++){
    int a=n;
    p=0;
    while(a%i==0){
      a=a/i;
      p++;
    }
    if(a==1){
      x=i;
      break;
    }
  }
}


///var Andrei (－_－) zzZ
void putere(int n, int &x, int &p){
    int val;
    for(x=2; x<=1000; x++){
        val=1;
        for(p=2; p<=1000; p++){
            val=x*val; ///val=x^p
            if(val==n) return;
            else if(val>n) break;
        }
    }
}

int main() {
    int n, x, p;
  n=216;
      Putere(n,x,p);
  cout<<x<<" "<<p;
    return 0;
}

