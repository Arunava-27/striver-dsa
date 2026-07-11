#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int t = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(t);            
            // if (j < i)
            // {
            //     cout << " ";
            // }
            
        }
        t++;
        cout << endl;
        
    }
    
    return 0;
}