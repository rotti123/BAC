SIII.3
  #include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin ("bac.txt");
    int fr[11]= {},x,v[10]={},i=0,max1=0;
    while(cin >> x){
        i++;
        fr[x%10]++;  /// frecventa nr cu aceeasi cifra a unitatilor
        v[x%10]=i; ///retinem ultima pozitie pt nr cu
        /// ultima cifra corespunzatoare
    }
    for(int k=0;k<=9;k++){
        if(fr[k]>max1){
            max1=fr[k];
        }
    }
    for(int j=0;j<=9;j++){
        if(max1==fr[j])
            cout << v[j] << " ";
    }
    return 0;
}
/**
Alg este eficient dpdv al timpului de exec deoarece are o 
complexitate O(n), unde n repr nr de elem din fisier.
Algoritmul foloseste un vector de frecventa fr[] pentru
a retine cate numere are fiecare grupare de numere u-prietene.
Totodata retinem pentru grupare de numere u-prietene
in sirul v[] ultima pozitie a unui element.
Gasim frecventa maxima de aparitie din vectorul fr[]
si afisam ultima aparitie a elemetelor gruparilor cu nr
maxim de aparitii.
*/
