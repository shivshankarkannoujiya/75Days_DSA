#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> arr){
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){

    vector<vector<int>> arr(5, vector<int>(10, 0));
    // print(arr);

    vector<vector<int>> brr;

    vector<int> v1(10, 0);
    vector<int> v2(6, 0);
    vector<int> v3(4, 0);
    vector<int> v4(3, 0);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);

    print(brr);
}