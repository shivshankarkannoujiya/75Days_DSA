#include <iostream>
#include <limits.h>
using namespace std;


int getMin(int arr[][3], int rows, int cols){
    int minAns = INT_MAX;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(arr[i][j] < minAns){
                minAns = arr[i][j];
            }
        }
    }

    return minAns;
}

int getMax(int arr[][3], int rows, int cols){
    int maxAns = INT_MIN;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }
        }
    }

    return maxAns;
}

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int rows = 3;
    int cols = 3;

    int minNum = getMin(arr, rows, cols);
    int maxNum = getMax(arr, rows, cols);

    cout << "MINIMUM_NUMBER IS: " << minNum << endl;
    cout << "MAXIMUM_NUMBER IS: " << maxNum << endl;
}