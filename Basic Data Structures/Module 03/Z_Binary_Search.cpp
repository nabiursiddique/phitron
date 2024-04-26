#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    while (q--)
    {
        int t;
        cin >> t;

        // applying binary search
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == t)
            {
                flag = true;
                break;
            }
            if (arr[mid] < t)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}