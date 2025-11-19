#include <iostream>
using namespace std;


void print_array_row_wise(int arr[3][3], int rows, int cols){
    cout << "--- PRINTING_ROWS_WISE ---" << endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void print_array_col_wise(int arr[3][3], int rows, int cols){
    cout << "--- PRINTING_COLS_WISE ---" << endl;
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < rows; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){

    // Create 2D Array and initialize
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int rows = 3;
    int cols = 3;

    print_array_row_wise(arr, rows, cols);
    print_array_col_wise(arr, rows, cols);

}