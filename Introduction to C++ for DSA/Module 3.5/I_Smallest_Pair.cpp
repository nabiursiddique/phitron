#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minimum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                int ans = arr[i] + arr[j] + j - i;
                minimum = min(minimum, ans);
            }
        }
        cout << minimum << endl;
    }

    return 0;
}