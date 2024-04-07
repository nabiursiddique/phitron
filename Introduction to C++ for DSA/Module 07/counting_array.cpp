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

    int frequency[n] = {0};

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " - " << frequency[i] << endl;
    }

    return 0;
}