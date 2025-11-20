#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& arr){

    int n = arr.size();
    int actual_sum = 0;
    for (int i = 0; i < n; i++){
        actual_sum = actual_sum + arr[i];
    }

    int expected_sum = ((n) * (n + 1)) / 2;
    int missing_number = expected_sum - actual_sum;

    return missing_number;
}

int main(){
    vector<int> arr = {0, 1, 2, 3, 5, 6, 7, 8};
    int missing_number = missingNumber(arr);
    cout << "MISSING_NUMBER: " << missing_number << endl;
}

