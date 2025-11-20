#include <iostream>
using namespace std;

void print_array(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort_zeros_ones(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++){
        if(arr[i] == 0)
            zeroCount++;
        if(arr[i] == 1)
            oneCount++;
    }

    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }

    while(oneCount--){
        arr[index] = 1;
        index++;
    }
}

int main(){

    int arr[] = {1, 1, 0, 1, 0, 1, 0, 0, 1, 1};
    int size = 10;

    print_array(arr, size);
    sort_zeros_ones(arr, size);
    print_array(arr, size);
}