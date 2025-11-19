#include <iostream>
#include <vector>
using namespace std;


void print(vector<int>& nums){
    for(auto it: nums){
        cout << it << " ";
    }
    cout << endl;
}

void rotate(vector<int>& nums, int k){

    int n = nums.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++){
        int newIndex = (i + k) % n;
        ans[newIndex] = nums[i];
    }

    nums = ans;
}

int main(){

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    cout << "ENTER THE STEPS: ";
    int k;
    cin >> k;

    rotate(nums, k);
    print(nums);
}