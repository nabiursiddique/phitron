#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++) //O(n^2)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << "Hello" << endl;
    //     }
    // }

    for (int i = 1; i <= n; i++) // O(n^2)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}