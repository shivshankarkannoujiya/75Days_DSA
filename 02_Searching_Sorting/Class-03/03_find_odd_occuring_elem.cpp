#include <iostream>
#include <vector>
using namespace std;


int findOddOccuringElement(vector<int>& arr){

    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
         
        if(low == high)
            return low;
        
        if(mid & 1){
            if(mid - 1 >=0 && arr[mid] == arr[mid - 1]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }else{
            if (mid + 1 < 0 && arr[mid] == arr[mid + 1]){
                low = mid + 2;
            }
            else
            {
                high = mid;
            }
        }    
    }

    return -1;
}

int main(){

    vector<int> v{1, 1, 2, 2, 5, 5, 6, 6, 2, 10, 10, 1, 1, 3, 3, 20, 20};

    int odd_occuring_element_index = findOddOccuringElement(v);
    cout << "ODD OCCURING ELEMENT IS: " << v[odd_occuring_element_index] << endl;
}