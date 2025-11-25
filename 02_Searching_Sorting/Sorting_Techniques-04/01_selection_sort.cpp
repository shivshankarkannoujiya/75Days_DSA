#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++){
            if(v[j] < v[min_index]){
                min_index = j;
            }
        }
        swap(v[i], v[min_index]);
    }
}

int main(){

    vector<int> v{5, 4, 3, 2, 1};

    cout << "PRINTING ARRAY BEFORE SORTING..."<<endl;
    print(v);
    selectionSort(v);
    cout << "PRINTING ARRAY AFTER SORTING..."<<endl;
    print(v);
}