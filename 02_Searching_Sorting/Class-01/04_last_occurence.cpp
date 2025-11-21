#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int>& v, int target){
    int low = 0;
    int high = v.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(v[mid] == target){
            ans = mid;
            low = mid + 1;
        }else if(target > v[mid]){
            low = mid + 1;
        }else if(target < v[mid]){
            high = mid - 1;
        }
    }

    return ans;
}



int main(){

    vector<int> v{10, 20, 30, 30, 30, 30, 40, 40, 40, 50};

    int target;
    cout << "ENTER TARGET_VALUE: ";
    cin >> target;

    int ans_index = lastOccurence(v, target);
    cout << "ANS INDEX: " << ans_index << endl;
}