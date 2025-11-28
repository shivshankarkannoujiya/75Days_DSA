#include <iostream>
using namespace std;


void toUpperCase(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        char currChar = ch[index];
        if(currChar >= 'a' && currChar <= 'z'){
            ch[index] = currChar - 'a' + 'A';
        }
        index++;
    }
}

int main(){

    char ch[27];
    cout << "ENTER CHARS: ";

    cin.getline(ch, 27);

    cout << "BEFORE CONVERTING: " << ch << endl;
    toUpperCase(ch);
    cout << "AFTER CONVERTING: " << ch << endl;
}