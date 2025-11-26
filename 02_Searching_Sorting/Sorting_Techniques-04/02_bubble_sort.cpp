#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

void bubble_sort(vector<int> &v) {

    int n = v.size();
    for (int i = 1; i < n; i++){
        bool isSwapped = false;
        for (int j = 0; j < n - i; j++){
            if(v[j] > v[j+1]){
                int temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
                isSwapped = true;
            }
        }
        if(!isSwapped){
            cout << "ROUND: " << i << " Already Sorted, No swapping done !!" << endl;
            break;
        }
    }
}

void bubbleSort(vector<int>& v){
    int n = v.size();
    for (int i = n-1; i >= 0; i++){
        bool isSwapped = false;

        for (int j = 0; j <= i - 1; j++){
            if(v[j] > v[j+1]){
                int temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
                isSwapped = true;
            }
        }

        if(!isSwapped){
            cout << "Already Sorted, Breaking Early" << endl;
            break;
        }

        // Proof for Optimizaion happens
        cout << "ROUND: " << n - i << endl;
    }
}

int main(){

    vector<int> v{1, 2, 3, 4, 5};
    bubble_sort(v);
    print(v);
}