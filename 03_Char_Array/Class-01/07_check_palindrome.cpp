#include <iostream>
#include <string.h>
using namespace std;


bool isPalindrome(char ch[], int len){
    int i = 0;
    int j = len - 1;

    while(i <= j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }

    return true;
}

int main(){

    char name[20];
    
    cout << "ENTER CHARS: ";
    cin >> name;
    
    int len = strlen(name);

    bool is_palindrome = isPalindrome(name, len);
    
    if (is_palindrome){
        cout << "VALID PALINDROME" << endl;
    }else{
        cout << "INVALID PALINDROME" << endl;
    }
    
}