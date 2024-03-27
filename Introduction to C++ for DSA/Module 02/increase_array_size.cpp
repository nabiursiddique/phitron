#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    // Deleting the elements of the array a
    delete[] a;

    // Increase the size of the a array
    a = new int[5];

    // coping the elements from the b array
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    // Deleting the array b after coping all the elements
    delete[] b;
    a[3] = 40;
    a[4] = 50;

    // printing the increased array a
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}