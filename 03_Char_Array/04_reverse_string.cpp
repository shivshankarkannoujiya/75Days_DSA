#include <iostream>
#include <string.h>
using namespace std;


void reverse(char name[], int len){
    int low = 0;
    int high = len - 1;
    while(low <= high){
        swap(name[low], name[high]);
        low++;
        high--;
    }
}

int main(){

    char name[20];

    cout << "ENTER STRING: ";
    cin.getline(name, 20);
    int len = strlen(name);

    cout << "PRINTING BEFORE REVERSE: ";
    cout << name << endl;

    reverse(name, len);
    
    cout << "PRINTING AFTER REVERSE: ";
    cout << name << endl;
}