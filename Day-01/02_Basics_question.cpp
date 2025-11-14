#include <iostream>
using namespace std;


int main(){

    int score[10];
    int size = 10;

    for (int i = 0; i < size; i++){
        cout << "Enter value at index: " << i << ": ";
        cin >> score[i];
    }
    
    cout << endl;
    for (int i = 0; i < size; i++){
        int doubledValue = 2 * score[i];
        cout << doubledValue << " ";
    }
    cout << endl;
    return 0;
}