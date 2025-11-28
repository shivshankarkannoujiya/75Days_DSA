#include <iostream>
using namespace std;

string removeOccurences(string s, string part){

    while(s.find(part) != string::npos){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){

    string str = "abccbaddcbaee";
    string part = "cba";

    string ans_string = removeOccurences(str, part);
    cout << "ANS IS: " << ans_string << endl;
}