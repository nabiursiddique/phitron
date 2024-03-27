#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    // we can delete the array from here because it's from heap
    delete[] a;
    return 0;
}

//* We need to use dynamic array to return a array from a function.