#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int>& v, int target){
    int low = 0;
    int high = v.size() - 1;
    int ans = -1;

    int mid = low + (high - low) / 2;

    while(low <= high){
        if(v[mid] == target){
            ans = mid;
            high = mid - 1;
        }else if(target > v[mid]){
            low = mid + 1;
        }else if(target < v[mid]){
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }

    return ans;
}

int main(){
    vector<int> v{30, 30, 30, 30, 30, 50, 70};

    int target;
    cout << "ENTER TARGET_VALUE:";
    cin >> target;

    int ans_index = firstOccurence(v, target);
    cout << "FIRST OCCURENCE OF TARGET VALUE FOUND AT_INDEX: " << ans_index << endl;
}