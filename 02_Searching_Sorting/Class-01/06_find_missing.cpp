#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &v) {
    int low = 0;
    int high = v.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        int diff = v[mid] - mid;
        if(diff == 1){
            low = mid + 1;
        }else{
            ans = mid;
            high = mid - 1;
        }
    }

    if(ans + 1 == 0)
        return v.size() + 1;

    return ans + 1;
};

int main(){

    vector<int> v = {2, 3, 4, 5, 6, 7, 8, 9};

    int missing_number = missingNumber(v);
    cout << "MISSING_NUMBER: " << missing_number << endl;
}