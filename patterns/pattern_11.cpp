#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sp = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << sp;
            
            if (sp == 1)
            {
                sp = 0;
            }
            else
            {
                sp = 1;
            }
        }
        cout << endl;
    }

    return 0;
}