#include <iostream>
using namespace std;

void replace(char ch[]){

    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}

int main(){

    char ch[20];

    cout << "ENTER CHARS: ";
    cin.getline(ch, 20);

    cout << "BEFORE: " << ch << endl;
    replace(ch);
    cout << "AFTER: " << ch << endl;
}