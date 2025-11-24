#include <iostream>
#include <vector>
using namespace std;


int searchInNearlySorted(vector<int>& v, int x){
    int low = 0;
    int high = v.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if( mid - 1 >=0 && v[mid - 1] == x){
            return mid - 1;
        }else if(v[mid] == x){
            return mid;
        }else if(mid + 1 < v.size() && v[mid + 1] == x){
            return mid + 1;
        }else if(x > v[mid]){
            low = mid + 2;
        }else{
            high = mid - 2;
        }
    }

    return -1;
}

int main(){

    vector<int> v = {20, 10, 30, 50, 40, 70, 60};
    int target;
    cout << "ENTER TARGET: ";
    cin >> target;

    int ans_index = searchInNearlySorted(v, target);
    cout << "TARGET FOUND AT INDEX: " << ans_index << endl;
}