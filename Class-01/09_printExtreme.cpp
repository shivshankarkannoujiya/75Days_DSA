#include <iostream>
using namespace std;

void extreme_print(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        if(left == right){
            cout << arr[left] << " ";
            left++;
            right--;
        }else{
            cout << arr[left] << " ";
            cout << arr[right] << " ";
            left++;
            right--;
        }
    }
    cout << endl;
}

int main(){

    int arr[7] = {1, 2, 3, 4, 5, 6 ,7};
    int size = 7;

    extreme_print(arr, size);
}