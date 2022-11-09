#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream f("bac.in");
  ifstream g("bac.txt");

 // ofstream cout("bac.out");
  int x, y;
  f>>x;
  g>>y;
  while(!f.eof() && !g.eof()){
    if(x==y){
        cout<<x<<" ";
        f>>x;
        g>>y;
    }
    else if(x<y){
        f>>x;
    }
    else if(x>y){
        g>>y;
    }
  }
  return 0;
}
