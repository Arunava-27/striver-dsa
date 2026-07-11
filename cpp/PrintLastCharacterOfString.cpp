#include <iostream>

using namespace std;

char lastChar(string &s)
{
    return s[s.size() - 1];
}
int main()
{
    string str = "arunava";
    cout << lastChar(str) << endl;
    return 0;
}