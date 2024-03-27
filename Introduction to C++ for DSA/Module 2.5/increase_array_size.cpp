#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr_a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr_a[i];
    }

    int m;
    cin >> m;
    int *arr_b = new int[m];
    for (int i = 0; i < m; i++)
    {
        arr_b[i] = arr_a[i];
    }

    delete[] arr_a;

    arr_a = new int[m];

    for (int i = 0; i < m; i++)
    {
        arr_a[i] = arr_b[i];
    }

    for (int i = n; i < m; i++)
    {
        cin >> arr_a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr_a[i] << " ";
    }

    return 0;
}