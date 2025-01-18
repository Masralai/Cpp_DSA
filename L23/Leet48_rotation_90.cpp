#include<bits/stdc++.h>
using namespace std;


void rotate(vector<vector<int>>& matrix) {
    
        
}

int main() {

    vector<vector<int>> matrix;

    matrix.push_back({1,2,3});
    matrix.push_back({4,5,6});
    matrix.push_back({7,8,9});

    rotate(matrix);

    for( int row = 0 ;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<matrix[row][col]<<" ";
        }cout<<endl;
    }
    
    
    return 0;
}