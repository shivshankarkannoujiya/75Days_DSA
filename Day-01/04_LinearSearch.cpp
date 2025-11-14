#include <iostream>
using namespace std;


int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;
    int n = 5;
    bool flag = 0;

    for (int i = 0; i < n; i++){
        if(target == arr[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << "TARGET FOUND !!" << endl;
    }else{
        cout << "TARGET NOT FOUND !!" << endl;
    }
}