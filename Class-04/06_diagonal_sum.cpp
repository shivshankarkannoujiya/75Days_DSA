#include <iostream>
using namespace std;


void printDiagonal(int arr[][4], int rows, int cols){
    for (int i = 0; i < rows; i++){
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

void printReverseDiagonal(int arr[4][4], int rows, int cols) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(i + j == cols - 1){
                cout << "[ " << i << "," << j << " ]: ";
                cout << arr[i][j] << endl;
            }
        }
    }
}

int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    int rows = 4;
    int cols = 4;

    printDiagonal(arr, rows, cols);
    cout << endl;
    printReverseDiagonal(arr, rows, cols);
}