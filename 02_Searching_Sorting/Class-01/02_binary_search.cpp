#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& v, int target){
    int start = 0;
    int end = v.size() - 1;
    int mid = (start + end) / 2;

    while(start <= end){
        if(v[mid] == target){
            return mid;
        }else if(target > v[mid]){
            start = mid + 1;
        }else if(target < v[mid]){
            end = mid - 1;
        }

        mid = (start + mid) / 2;
    }
    return -1;
}

int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int target;
    cout << "ENTER TARGET_VALUE:";
    cin >> target;

    int ans_index = binarySearch(v, target);
    if(ans_index >= 0){
        cout << "TARGET FOUND AT_INDEX: " << ans_index << endl;
    }else{
        cout << "TARGET NOT FOUND !!" << endl;
    }
}