#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int a = 10; // Stack er moddhe save hosse normal variable
    int *p;     // address variable amara pointer name chini
    p = &a;     // a er address hold kortise, reference kora
    *p = 100;   // dereference kora
    cout << a << endl;
    */

    // Dynamic array
    // int a[5] = {1, 2, 3, 4, 5};
    // int *p;
    // p=a; //a er first value er address ta thakbe
    // p = &a[0];
    // cout << p;

    int *arr = new int[10];
    arr[0] = 10;
    arr[1] = 100;
    // delete[] arr;
    // delete arr;
    free(arr);
    return 0;
}