#include <iostream>
using namespace std;

void printArray(int arr[][3], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int arr[][3], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = i; j < cols; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int rows = 3;
    int cols = 3;

    cout << "PRINTING BEFORE TRANSPOSE: " << endl;
    printArray(arr, rows, cols);
    cout << "TRANSPOSE DONE !" << endl;
    transposeMatrix(arr, rows, cols);
    cout << "PRINTING AFTER TRANSPOSE: " << endl;
    printArray(arr, rows, cols);

}