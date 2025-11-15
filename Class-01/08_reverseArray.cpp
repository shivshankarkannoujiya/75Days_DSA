#include <iostream>
using namespace std;

void print_array(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse_array(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){

    int arr[7] = {10, 20, 30, 40, 50, 60,70};
    int size = 7;

    print_array(arr, size);
    reverse_array(arr, size);
    print_array(arr, size);
}