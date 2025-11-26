#include <iostream>
#include <vector>
using namespace std;


void print(vector<int>& v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

void insertionSort(vector<int>& v){
    int n = v.size();
    for (int i = 1; i < n; i++){
        int currVal = v[i];
        int j = i - 1;
        while(j >=0){
            if (v[j] > currVal){
                v[j + 1] = v[j];
            }
            else{
                break;
            }
            j--;
        }
        v[j + 1] = currVal;
    }
}

int main(){

    vector<int> v{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertionSort(v);
    print(v);
}