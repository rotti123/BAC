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
