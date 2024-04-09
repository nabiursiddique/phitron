#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int odd = 0, even = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            if (even == odd)
            {
                cout << 0 << endl;
            }
            else
            {
                if (even == n || odd == n)
                {
                    cout << n / 2 << endl;
                }
                else
                {
                    cout << abs(even - n / 2) << endl;
                }
            }
        }
    }
    return 0;
}