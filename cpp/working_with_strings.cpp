#include<bits/stdc++.h>

using namespace std;

int main(){
    string str = "arunava"; // 7 characters

    cout << str.size() << endl;

    for (int i = 0; i < str.length(); i++) // for (int i = 0; i < 7; i++)
    {
        cout << str[i] << endl; // str[0] = 'a', str[1] = 'r', str[2] = 'u', str[3] = 'n', str[4] = 'a', str[5] = 'v', str[6] = 'a'
    }
    
    return 0;
}