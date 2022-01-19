

SIII ex1
#include <iostream>
using namespace std;

    void putere (int n, int &d, int &p){
            int dmin = 1000000, pmin = 1000000;
            d=2;
        while (n != 1){
                p = 0;
                while (n % d == 0){
                        p++;
                        n = n/d;
                }
                if (p < pmin && p > 0){
                        pmin = p;
                        dmin = d;
                }
                d++;
        }
        d = dmin;
        p = pmin;
    }

int main() {
    int n, p ,d;
    cin >> n;
    putere(n, d ,p);
    cout << d << " " << p;
    return 0;
}
