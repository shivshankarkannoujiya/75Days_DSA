#include <iostream>
#include <vector>
using namespace std;


void printArray(vector<int>v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

void sortColors(vector<int>& v){
    int n = v.size();
    int left = 0;
    int index = 0;
    int right = n - 1;

    while(index <= right){
        if(v[index] == 0){
            swap(v[index], v[left]);
            index++;
            left++;
        }else if(v[index] == 2){
            swap(v[index], v[right]);
            right--;
        }else{
            index++;
        }
    }
}

int main(){
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 2};
    sortColors(v);
    printArray(v);
}