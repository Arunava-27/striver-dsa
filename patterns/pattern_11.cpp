#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start = 1;
        if (i % 2)
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            if (j < i)
            {
                cout << " ";
            }
            start = !start;
        }
        cout << endl;
    }

    return 0;
}