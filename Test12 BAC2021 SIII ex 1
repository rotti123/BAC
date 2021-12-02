#include <iostream>

using namespace std;

void frate(int x,int &y)
{   y=0;
    int p=1,c;
    while(x!=0){
        c=x%10;
        if(c==9){
            y=-1;
            return;
        }
        x/=10;
        y=y+(c+1)*p;
        p*=10;
    }
}

int main() {
    int x,y;
    cin >> x;
    frate(x,y);
    cout<< y;
    return 0;
}
