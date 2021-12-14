1) b
2) c
i= 75 	j=30   	75
i=45	j=30	45
i=15	j=30	15	i=30	j=15
i=15	j=15	15
3) a
4) d 5
5) b


citeşte n
 (număr natural)
 m<-0; 
┌pentru x<-1,9 execută
│ cp<-n
│┌cât timp cp≠0 execută
││┌dacă cp%10=x atunci
│││ m<-m*10+x
││└■
││ cp<-[cp/10]
│└■
└■
 scrie m

SII ex 2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
   char a[21],b[21];
   cin.getline(b,20);
   int n=strlen(b);
   if(strlen(b)<3){
    strcpy(a,"nedeterminat");
   }else{
    strcpy(a,b+n-3);
   }
   cout<<a;
    return 0;
}
 
