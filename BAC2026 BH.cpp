III.2
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100],*p,sol[100]={},cuv[100]={};
    int len=0;
    cin.getline(s,100);
    p=strtok(s," ");
    while(p)
    {
        len=strlen(p);
        if(len>9)
        {
            cuv[0]=p[0];
            cuv[1]=len/10+'0';
            cuv[2]=len%10+'0';
            cuv[3]=p[len-1];
            strcat(sol,cuv);
            strcat(sol," ");
        }
        else{
            strcat(sol,p);
            strcat(sol, " ");
        }
        p=strtok(NULL," ");
    }
    strcpy(s,sol);
    cout<<s;
    return 0;

}
