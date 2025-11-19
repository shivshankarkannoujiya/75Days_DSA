#include <iostream>
using namespace std;


void printRowWise(int arr[][3], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int arr[3][3];
    
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << "ENTER VALUE AT ROWS_INDEX: " << i << " COLS_INDEX:  " << j << " : ";
            cin >> arr[i][j];
        }
    }

    printRowWise(arr, rows, cols);
}