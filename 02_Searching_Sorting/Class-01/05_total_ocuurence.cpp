#include <iostream>
#include <vector>
using namespace std;

int firstccurence(vector<int> &v, int target) {
    int low = 0;
    int high = v.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] == target){
            ans = mid;
            high = mid - 1;
        }else if(target > v[mid]){
            low = mid + 1;
        }else if(target < v[mid]){
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> &v, int target) {
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

int totalOccurence(vector<int> &v, int target) {

    int first_occurence = firstccurence(v, target);
    int last_occurence = lastOccurence(v, target);

    int total_occurence = (last_occurence - first_occurence) + 1;

    return total_occurence;
}

int main(){

    vector<int> v{10, 20, 30, 30, 30, 30, 30, 40, 50, 60};
    
    int target;
    cout << "ENTER TARGET_VALUE: ";
    cin >> target;

    int total_occurence = totalOccurence(v, target);
    cout << "TOTAL_OCCURENCE_IS: " << total_occurence << endl;
}