#include<iostream>

using namespace std;

int main(){
    string str1, str2, str3;
    getline(cin, str1);
    getline(cin, str2); // to read the whole line including spaces
    cin >> str3; // to read a single word (until space)

    cout << str1 << endl << str2 << endl << str3;
    return 0;
}