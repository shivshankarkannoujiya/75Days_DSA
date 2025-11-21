#include <iostream>
#include <vector>
using namespace std;


bool linearSearch(vector<int>& v, int target){
    for (int i = 0; i < v.size(); i++){
        if(v[i] == target){
            return true;
        }
    }
    return false;
}

int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int target;
    cout << "ENTER TARGET_VALUE: ";
    cin >> target;

    bool is_target_found = linearSearch(v, target);
    if(is_target_found){
        cout << "TARGET FOUND!!" << endl;
    }else{
        cout << "TARGET NOT FOUND!!" << endl;
    }
}