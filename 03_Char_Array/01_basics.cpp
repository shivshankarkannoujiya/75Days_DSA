#include <iostream>
using namespace std;


int main(){

    char ch[10];

    cout << "ENTER CHARACTERS: ";
    cin >> ch;

    cout << "PRINTING: "<< ch << endl;

    // PRINTING EACH CHARACTER
    for (int i = 0; i < 10; i++){
        cout << "CHAR AT INDEX: " << i << " : " << ch[i] << " " << endl;
    }

    char temp = ch[4];
    int val = (int) temp;
    cout << "INTEGER VALUE: " << val << endl; 
}