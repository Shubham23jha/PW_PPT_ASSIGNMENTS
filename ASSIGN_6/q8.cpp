#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>a={{1,0,0},{-1,0,3}};
    vector<vector<int>>b={{7,0,0},{0,0,0},{0,0,1}};
   vector<vector<int>> c(a.size(), vector<int>(b[0].size(), 0));

    for(int i=0;i<a.size();i++){
        for(int j=0;j<b[0].size();j++){
            for(int k=0;k<b.size();k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
    for(int i=0;i<c.size();i++){
        for(int j=0;j<c[0].size();j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}