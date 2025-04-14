
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
    ifstream fin("bac.in");
    int n,m,sheet[100][50]={},cnt=0,lmax=0,kmax=0;
    int r[50]={};
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>sheet[i][j];
        }
    }
    for(int i=0;i<m;i++) fin>>r[i];

    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<m;j++){
            if(sheet[i][j]==r[j]){
              cnt++;
            }
        }
        if(cnt>lmax) lmax=cnt,kmax=1;
        else if(cnt==lmax) kmax++;

    }
    cout<<kmax;
    cout<<endl;

        /// nr intrebari

    int v[m+1]={};
    for(int i=1;i<n;i++)
    for(int j=0;j<m;j++){
        if(sheet[i][j]!=sheet[i-1][j]) v[j]=1;
    }

    for(int i=0;i<m;i++){
        if(v[i]==0) cout<<i+1<<" ";
    }
    return 0;
}

