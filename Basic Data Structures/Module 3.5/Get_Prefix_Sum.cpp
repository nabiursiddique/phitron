#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int arr2[n];
    arr2[0] = arr[0];
    long long int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum = sum + arr[i];
        arr2[i] = sum;
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(arr2[i], arr2[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}