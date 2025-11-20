#include <iostream>
#include <vector>
using namespace std;


void print_vector(vector<int>v){
    int size = v.size();
    for (int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_vector_method2(vector<int> v){
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
}


int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // print_vector(v);
    // v.pop_back();
    // print_vector(v);

    // cout << "VECTOR_SIZE: " << v.size() << endl;
    // cout << "VECTOR_CAPACITY: " << v.capacity() << endl;

    // v.clear();

    // cout << "VECTOR_SIZE: " << v.size() << endl;
    // cout << "VECTOR_CAPACITY: " << v.capacity() << endl;
    
    vector<int> arr;
    cout << "VECTOR_SIZE: " << arr.size() << endl;
    cout << "VECTOR_CAPACITY: " << arr.capacity() << endl;

}