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

int main(){
    vector<int> v{12, 14};

    int pivot_index = getPivotIndex(v);
    cout << "PIVOT_ELEMENT: " << pivot_index << endl;
}