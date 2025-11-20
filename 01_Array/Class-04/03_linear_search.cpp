#include <iostream>
using namespace std;


bool linearSearch(int arr[][3], int target, int rows, int cols){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int rows = 3;
    int cols = 3;

    cout << "ENTER TARGET VALUE: ";
    int target;
    cin >> target;

    bool isFound = linearSearch(arr, target, rows, cols);

    if(isFound){
        cout << "TARGET VALUE: " << target << " PRESENT IN ARRAY" << endl;
    }else{
        cout << "TARGET VALUE: " << target << " NOT PRESENT IN ARRAY" << endl;
    }
}