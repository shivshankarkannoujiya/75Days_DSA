#include <iostream>
using namespace std;


string removeDuplicate(string s){
    string ans = "";

    int index = 0;
    while(index < s.length()){
        if(ans.length() > 0 && ans[ans.length() - 1] == s[index]){
            ans.pop_back();
        }else{
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}

int main(){
    string str = "abbacy";
    string ans = removeDuplicate(str);
    cout << "ANS: " << ans << endl;
}