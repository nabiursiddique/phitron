#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arrRev[n];
    for (int i = 0; i < n; i++)
    {
        arrRev[n - i - 1] = arr[i];
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arrRev[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}