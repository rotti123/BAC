SIII.3

  #include <iostream>
#include<fstream>
#include <cstring>
using namespace std;

int main()
{
   ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");
    int x,y,i,j,ok=1;
    f1>>x;
    f2>>y;
    while(ok==1){
        if(x<y)
        {
            cout << x << " ";
            if(!(f1 >> x))
            ok=0;

        }
        else
        if(y<x){
            cout << y << " ";
            if(!(f2>>y))
                ok=0;
        }
        else
        {

            cout << x << " " << y << " ";
            if(!(f1>>x))
                ok=0;
            if(!(f2>>y))
                ok=0;
        }


    }
    while(f1>>x){
        cout << x << " ";
    }
    while(f2>>y){
        cout << y << " ";
    }
    return 0;
}


