#include <iostream>
#include <vector>
using namespace std;

int getPivotIndex(vector<int>& v){
    int low = 0;
    int high = v.size() - 1;

    while(low <= high){

        int mid = low + (high - low) / 2;
        if(low == high)
            return low;
        if(mid - 1 >=0 && v[mid] < v[mid -1]){
            return mid - 1;
        }else if( mid + 1 < v.size() && v[mid] > v[mid + 1]){
            return mid;
        }else if(v[low] > v[mid]){
            high = mid - 1;
        }else {
            low = mid + 1;
        }       
    }

    return -1;
}

int binarySearch(vector<int>nums, int low, int high, int target){

    while(low <= high){

        int mid = low + (high - low) / 2;

        if(nums[mid] == target){
            return mid;
        }else if(target > nums[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;
}

int search(vector<int>& nums, int target){

    int pivot_index = getPivotIndex(nums);
    cout << "PIVOT INDEX:" << pivot_index << endl;
    int n = nums.size();
    int ans = -1;

    if(target >= nums[0] && target <= nums[pivot_index] ){
        ans = binarySearch(nums, 0, pivot_index, target);
    }else{
        ans = binarySearch(nums, pivot_index + 1, n - 1, target);
    }

    return ans;
}

int main(){

    vector<int> v{1, 2};
    int target;
    cout << "ENTER TARGET: ";
    cin >> target;

    int ans = search(v, target);
    cout << "IS_FOUND: " << ans << endl;
}