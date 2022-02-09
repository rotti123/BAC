#include <bits/stdc++.h>
using namespace std;

//cifra minima a unui numar;
int cifmin(int n){
  if(n<10) return n; // daca numarul are doar o cifra, o afisam
  else{
    int x=cifmin(n/10);
    if(x<n%10)  return x;
    else        return n%10;
    // return min(n%10,cifmin(n/10));
    
  }
}

int cifredezero (int n){
  if(n<10){
    if(n%10==0) return 1; ///return (n%10==0);
    else return 0;        /// 
  }
  if(n%10==0) return 1 + cifredezero(n/10);
  else return 0 + cifredezero(n/10);
    
    
  
}
// cifra maxima a unui nr.
int cifmax(int n){
  if(n<10) return n;
  else{
     int x=cifmax(n/10);
    if(x>n%10) return x;
    else       return n%10;
    
   // return max(n%10,cifmax(n/10));
  }
}
//==================================================
/// Afisarea numarului de cifre pare ale unui numar ///
//==================================================


int cif_p(int n){
  if(n<10){
    if(n%2==0) return 1;
      return 0;
  }
  if(n%2==0) return 1 + cif_p(n/10);
  else       return cif_p(n/10);
}

// Verifica cate cifre sunt mai mari decat k
int f(int n, int k){
        if (n < 10){
            if (n % 10 > k)  return 1;
            else             return 0;
        }
        else {
          if (n%10 > k) return 1 + f(n / 10,k);
          else            return f(n / 10,k);
        }
    }

    
int main() {
  // ifstream cin("test.in");
  // ofstream cout("test.out");
   
    int n;
    
    cin>>n;
    
    cout<<f(n,2);

    return 0;
}
