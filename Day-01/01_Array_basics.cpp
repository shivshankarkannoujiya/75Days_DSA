#include <iostream>
using namespace std;


int main(){

    // int arr[10];
    // char ch[10];
    // bool flag[10];
    // long num[100];
    // short snum[1000];
    // cout << "Array created successfully!!" << endl;

    // int a = 10;
    // cout << "Address of a: " << &a << endl;

    // int arr[10];
    // cout << "Base Address of arr" << &arr << endl;
    // cout << "Base Address of arr" << arr << endl;

    // int arr[] = {1, 2, 3, 4, 5};
    // int brr[5] = {1, 2, 3, 4, 5};
    // int crr[5] = {1, 2};
    // int drr[2] = {1, 2, 3, 4, 5};
    // int err[4] = {};

    // int score[6] = { 10, 20, 30, 40, 50, 90 };
    // int n = 6;
    // for (int i = 0; i < n; i++){
    //     cout << score[i] << ",";
    // }

    int marks[5];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value at index: " << i << " => ";
        cin >> marks[i];
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        cout << marks[i] << ",";
    }
}