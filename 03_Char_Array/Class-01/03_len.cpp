#include <iostream>
#include <string.h>
using namespace std;

int length(char ch[], int size){
    int len = 0;
    int index = 0;

    while(ch[index] != '\0'){
        len++;
        index++;
    }
    return len;
} 

int main(){

    char ch[20];

    cout << "ENTER CHARS: ";
    cin >> ch;

    int char_length = length(ch, 20);
    cout << "LENGTH IS: " << char_length << endl;
    cout << "LENGTH_USING_BUILTIN_FN: " << strlen(ch) << endl;
}