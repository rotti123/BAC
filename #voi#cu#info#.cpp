/// Input: #voi#da#bacu#la#info#
///Output: #voi#da#ucab#la#ofni#

///Inversati cuvintele de lungime maxima din sir. 

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


int main() {
    char s[101] = {}, s2[101] = {}, aux[101] = {}, cuv[101] = {}, *p, *p2, nou[101] = {};
    int maxx = -1, lung;
    cin.getline(s, 101);
    strcpy(s2, s);
    p = strtok(s, "#");
    while(p != NULL) {
        strcpy(cuv, p);
        lung = strlen(cuv);
        if(lung > maxx) maxx = lung;
        p = strtok(NULL, "#");
    }
    strcat(nou, "#");
    p2 = strtok(s2, "#");
    while(p2 != NULL) {
        strcpy(cuv, p2);
        lung = strlen(cuv);
        if(lung == maxx) {
            int cnt = 0;
            for(int i = lung - 1; i >= 0; i--) {
                aux[cnt] = cuv[i];
                cnt++;
            }
            strcpy(cuv, aux);
        }
        strcat(nou, cuv);
        strcat(nou, "#");
        p2 = strtok(NULL, "#");
    }
    strcpy(s, nou);
    cout << s;
    return 0;
}
