#include <iostream>
using namespace std;

bool isPaindrome(string s, int i , int j){
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }

    return true;
}

bool validPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else{
            bool ansOne = isPaindrome(s, i + 1, j);
            bool ansTwo = isPaindrome(s, i, j - 1);

            return ansOne || ansTwo;
        }
    }

    return true;
}

int main(){

    string s;
    cout << "ENTER STRING: ";
    getline(cin, s);

    bool isValidPalindrome = validPalindrome(s);
    if(isValidPalindrome){
        cout << "Given String: " << s << " is a valid palindrome" << endl;
    }else{
        cout << "Given String: " << s << " is not a valid palindrome" << endl;
    }
}