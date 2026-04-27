#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int max = a > b ? a > c ? a : c : b; // nested ternary operator, can be read as: if a > b, then check if a > c, if true return a else return c, else return b

    cout << max;
    return 0;
}