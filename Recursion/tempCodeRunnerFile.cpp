#include<iostream>
#include<vector>
using namespace std;
#define row 4
#define col 5

int main(){
    vector<vector<int>>vec;
    int n=10;
    for(int i=0;i< row;i++)
    {
        vector<int>v1;
        for(int j=0;j<j<col;j++){
            v1.push_back(n);
            n+=5;

        }
        vec.push_back(v1);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++)
        cout<<vec[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}