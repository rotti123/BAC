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
        if(i == k) continue;
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
