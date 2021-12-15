#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[21][21] = {}, model[20] = {}, *p;
    int n, k;
    bool ok = false;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    strcpy(model, s[k - 1]);
    for(int i = 0; i < n; i++) {
        if(i == k - 1) continue;
        p = strstr(s[i], model);
        if(p != NULL) {
            if(strcmp(model, p) == 0) {
                ok = true;
                cout << s[i] << " ";
            }
        }
    }
    if(ok == false) cout << "nu exista";
    return 0;
}

///SIII ex3
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

int main() {
    int st,dr,lmax=-1,lung=0;
    int x;
    int k=0;
    while(fin >> x){
        if(x%10==0){
        lung++;
        }
        else{
            if(lung>lmax){
                lmax=lung;
                k=1;
            }
           else if(lung == lmax){
            k++;
           }
            lung=0;
        }
    }
    if(lung>lmax){
        if(lung>lmax){
                lmax=lung;
                k=1;
            }
           else if(lung == lmax){
            k++;
           }
    }
    cout<<lmax<<" "<<k;
}
//Astept variantele voastre!!!!
//V1. Patricia

///
/*
Algoritmul verifica divizibilitatea fiecarui element cu 10.

*/

