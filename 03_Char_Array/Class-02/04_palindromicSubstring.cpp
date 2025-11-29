#include <iostream>
using namespace std;

int expand(string s, int i , int j){
    int count = 0;
    while( i >= 0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s){
    
    int totalCount = 0;

    for (int i = 0; i < s.length(); i++){
        int odd_ans = expand(s, i, i);
        int even_ans = expand(s, i, i + 1);
        totalCount = totalCount + odd_ans + even_ans;
    }

    return totalCount;
}

int main(){

    string s;
    cout << "ENTER STRING: ";
    getline(cin, s);

    int ans = countSubstrings(s);
    cout << "Total Palindromic substring: " << ans << endl;
}