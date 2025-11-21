#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int>& arr, int x){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x ){
                return true;
            }
        }
    }
    return false;
}


int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    cout<<"ENTER VALUE: ";
    int x; 
    cin>>x;

    bool isPairPresent = twoSum(arr, x);

    if(isPairPresent){
        cout << "PAIR PRESENT IN ARRAY" << endl;
    }else{
        cout << "PAIR IS NOT PRESENT IN ARRAY" << endl;
    }
}
