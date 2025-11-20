#include <iostream>
using namespace std;

int getUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[9] = {2, 10, 11, 10, 13, 15, 13, 15, 2};
    int size = 9;

    int unique_element = getUnique(arr, size);
    cout << "UNIQUE_ELEMENT: " << unique_element << endl;
}