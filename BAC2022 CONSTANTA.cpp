#include <iostream>

using namespace std;
int v[100];

int main(){
    int n, m, i = 1, j = 1, x, y;
    cin >> n;
    while (cin >> x){
        v[i] = x;
        i++;
    }
    i = 1;
    cin >> m;
    while (i <= n && j <= m){
        cin >> y;
        if (v[i] % 3 == 0  &&  y % 3 == 0){
            if (v[i] < y){
                cout << v[i] << " ";
                i++;
            }
            else if (v[i] > y){
                cout << y << " ";
                cin >> y;
                j++;
            }
            else if (v[i] == y){
                cout << v[i];
                cin >> y;
                i++;
                j++;
            }
        }
        if (v[i] % 3 != 0){
            i++;
        }
        if (y % 3 != 0){
            cin >> y;
        }
    }
    if (i > n){
        while (cin >> y){
            if (y % 3 == 0){
                cout << y << " ";
            }
        }
    }
    else if (j > m){
        for (int c = i; c <= n; c++){
            if (v[c] % 3 == 0){
                cout << v[c] << " ";
            }
        }
    }
    return 0;
}
