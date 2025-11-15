#include <iostream>
using namespace std;

void zeroOneCount(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }else{
            continue;
        }
    }

    cout << "ZERO_COUNT: " << zeroCount << endl;
    cout << "ONE_COUNT: " << oneCount << endl;
}

int main(){

    int arr[] = {0, 0, 0, 0, 1, 0, 1, 2, 4, 1, 1};
    int size = 11;
    zeroOneCount(arr, size);
}