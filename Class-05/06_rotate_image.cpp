#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<vector<int>>& matrix){
    for (int i = 0; i < matrix.size(); i++){
        for (int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>>& matrix){

    int rows = matrix.size();

    // Transpose
    for (int i = 0; i < rows; i++){
        for (int j = i; j < matrix[i].size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each rows of transposed matrix
    for (int i = 0; i < rows; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

}

int main(){

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    print(matrix);
    rotate(matrix);
    cout << endl;
    print(matrix);
}