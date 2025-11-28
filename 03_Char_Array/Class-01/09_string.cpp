#include <iostream>
using namespace std;


int main(){

    // string name;

    // cout << "ENTER NAME: ";
    // getline(cin, name);

    // TODO: length
    // cout << "LENGTH OF STRING: " << name.length() << endl;

    // TODO: isempty
    // cout << "isEmpty: " << name.empty() << endl;

    // TODO: Check at particular position
    // cout << "Char at position 0 is: " << name.at(0) << endl;

    // TODO: Front/back char of string
    // cout << "Front char string is: " << name.front() << endl;
    // cout << "Back char string is: " << name.back() << endl;

    // TODO: Concat 2 strings <append>
    // string str1 = "Abhi";
    // string str2 = " Kannoujiya";

    // cout << str1 << endl;
    // cout << str2 << endl;
    // str1.append(str2);
    // cout << str1 << endl;
    // cout << str2 << endl;

    // TODO: Erase from the string from the given range

    // string description = "This is a car";
    // description.erase(4, 3);
    // cout << description << endl;

    // TODO: Insert in between the string
    // string name = "Golu Gabbar";
    // string middle_name = "Babar ";

    // name.insert(5, middle_name);
    // cout << name << endl;

    // TODO: push/pop
    // string name = "Love";
    // cout << name << endl;

    // name.push_back('r');
    // cout << name << endl;

    // name.pop_back();
    // cout << name << endl;


    // // TODO: find
    // string desc = "This is very lovely day";
    // string str = "lovely";

    // bool isFound = desc.find(str);
    // cout << "FOUND: " << isFound << endl;

    // or
    // if (desc.find(str) != string::npos){
    //     cout << "FOUND" << endl;
    // }else{
    //     cout << "NOT FOUND" << endl;
    // }
    

    // TODO: compare <study more if ans is `> 0 and < 0` >

    // string str1 = "green apple";
    // string str2 = "red apple";

    // if(str1.compare(str2) != 0){
    //     cout << "NOT MATCHING" << endl;
    // }else{
    //     cout << "MATCHING" << endl;
    // }

    // TODO: substr
    string str = "We think in generalities, but we live in details.";
    string sub_string = str.substr(3, 5);
    cout << "SUBSTRING IS: " << sub_string << endl;
}