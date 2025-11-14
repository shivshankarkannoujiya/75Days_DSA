#include <iostream>
#include <limits.h>
using namespace std;

int min_Num(int arr[], int size){
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }

    return minAns;
}

int max_Num(int arr[], int size){
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++){
        if(arr[i] > maxAns){
            maxAns = arr[i];
        }
    }

    return maxAns;
}

int main() {

    int arr[5] = {-5, 4, 3, 2, 1};
    int size = 5;

    int minNumber = min_Num(arr, size);
    int maxNumber = max_Num(arr, size);

    cout << "MINIMUM_NUMBER: " << minNumber << endl;
    cout << "MAXIMUM_NUMBER: " << maxNumber << endl;
}