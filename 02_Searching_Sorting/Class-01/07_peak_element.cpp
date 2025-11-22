#include <iostream>
#include <vector>
using namespace std;


int peakElement(vector<int>& v){
    int low = 0;
    int high = v.size() - 1;

    while(low < high){
        int mid = low + (high - low) / 2;
        if(v[mid] < v[mid + 1]){
            low = mid + 1;
        }else{
            high = mid;
        }
    }

    return low;
}

int main() {

    vector<int> v{10, 20, 50, 40, 30};
    int peak_element = peakElement(v);
    cout << "PEAK_ELEMENT: " << peak_element << endl;
}