#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


void print(vector<int>& ans){
    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;
}


vector<int> rowAndMaximumOnes(vector<vector<int>>& mat){

    vector<int> ans;

    int rows = mat.size();
    int rowNumber = -1;
    int oneCount = INT_MIN;

    for (int i = 0; i < rows; i++){
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++){
            if(mat[i][j] == 1){
                count++;
            }
        }

        if(count > oneCount){
            oneCount = count;
            rowNumber = i;
        }
    }

    ans.push_back(rowNumber);
    ans.push_back(oneCount);

    return ans;
}

int main(){

    vector<vector<int>> mat = {
        {0,1,1,0},
        {1,1,0,0},
        {1,0,0,0},
        {1,1,1,0},
    };

    vector<int> ans = rowAndMaximumOnes(mat);
    print(ans);
}