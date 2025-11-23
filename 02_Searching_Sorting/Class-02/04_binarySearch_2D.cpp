#include <iostream>
#include <vector>
using namespace std;


bool searchMatrix(vector<vector<int>>& matrix, int target){

    int rows = matrix.size();
    int cols = matrix[0].size();
    int totalSize = rows * cols;

    int low = 0;
    int high = totalSize - 1;
    
    while(low <= high){

        int mid = low + (high - low) / 2;

        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        int currentNumber = matrix[rowIndex][colIndex];

        if(currentNumber == target){
            return true;
        }else if(target > currentNumber){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
    };

    int target;
    cout << "ENTER TARGET: ";
    cin >> target;

    bool is_found = searchMatrix(matrix, target);
    if(is_found){
        cout << "TARGET FOUND !!" << endl;
    }else{
        cout << "TARGET NOT FOUND 🙊" << endl;
    }
}