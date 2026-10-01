SIII.1
#include <iostream>

using namespace std;
int baza(int n,int b)
{

    while(n)
    {
        if(n%10>=b)
            return -1;
        n=n/10;

    }
    return 1;
}
int main()
{
    int n,b;
    cin>>n>>b;
    cout<<baza(n,b);
    return 0;
}
SIII.2
  #include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[200];
    cin.getline(s, 200);
    char* p;
    int primul=1;
    char sol[21], mini[2]="9", planta[21];
    do{
        if(primul==1){
            p=strtok(s, " ");
            primul=0;
        }
        else{
            p=strtok(NULL, " ");
        }
        if(p==NULL){
            break;
        }

        strcpy(planta, p);
        p=strtok(NULL, " ");
        cout << planta << " " << p;
        cout << endl;
        if(p[0]<mini[0]){
            strcpy(sol, planta);
            strcpy(mini, p);
        }
        else if(p[0]==mini[0]){
            if(strcmp(planta, sol)<0){
                strcpy(sol, planta);
            }
        }
    }while(1>0);
    cout << sol;
    return 0;
}
