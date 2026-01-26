II.3

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    int i, j, mat[6][6];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j){
                mat[i][j]=5;
            }
            else if(i%2==0){
                mat[i][j]=4-i;
            }
            else mat[i][j]=4-j;
            cout << mat[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}
