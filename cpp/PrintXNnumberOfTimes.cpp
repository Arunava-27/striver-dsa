#include <iostream>

using namespace std;

void printX(int X, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << X;
        if (i != N - 1)
        {
            cout << " ";
        }
    }
}

int main()
{
    printX(7, 5);
    return 0;
}