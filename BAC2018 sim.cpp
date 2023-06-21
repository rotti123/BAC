#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("bac.txt");

int main()
{
    char s[101], a[101][101]={}, *p; ///arena
   int k=0,ok=0,poz;                 ///01234
    cin.getline(s, 100);
    p = strtok (s, " ");
    while (p != NULL)
      {
        strcpy(a[k], p);
        p = strtok(NULL, " ");
        k++;
      }
    for (int i = 0; i < k; i++)
      {
        if(strlen(a[i]) % 2 == 1)
        {
          char cuv[101]={};
          int q=0,poz=strlen(a[i])/2;
          for(int x=0;x<strlen(a[i]);x++){
            cuv[q]=a[i][x];
            q++;
            if(x==poz){
                cuv[q]=a[i][x];
                q++;
            }
          }
          cuv[q]='\0';
          cout<<a[i]<<" "<<cuv<<'\n';
          for(int j = 0; j < k; j++)
            {
              if(strcmp(a[j], cuv) == 0)
              {
                ok = 1;
                cout << "DA";
                return 0;
              }
            }
        }
      }
    cout << "NU";

    return 0;
}
