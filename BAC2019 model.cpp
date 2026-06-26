SIII.2
  #include <iostream>
#include<cstring>
#define INT unsigned int
using namespace std;
using integer = unsigned int;
int main()
{
    char s[101],a='*',b='*',c='*',*p;
    cin.getline(s,101);
    p=strtok(s," ");
    for(int i=0; i<strlen(p); i++)
    {
        if(strchr("aeiou",p[i])==0) ///strrchr(txt,ch) -> ultimul ch
        {
            a=p[i];
            break;
        }
    }
    p=strtok(NULL," ");
    for(int i=0; i<strlen(p); i++)
    {
        if(strchr("aeiou",p[i])!=0)
        {
            b=p[i];
            break;
        }
    }
    p=strtok(NULL," ");
    while(p!=NULL){
        c=p[strlen(p)-1];
        p=strtok(NULL," ");
    }
    if(a!='*' && b!='*' && c!='*')
        cout << a << b << c;
    else
        cout << "nu exista";
    return 0;
}
