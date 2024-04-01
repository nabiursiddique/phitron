//* pass by address

#include <bits/stdc++.h>
using namespace std;

/*
void swap_two(int x, int y)
//* pass by value
{
    // formal parameters
    int temp = x;
    x = y;
    y = temp;
}
*/

void swap_two(int *x, int *y)
//* pass by reference
{
    // formal parameters
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_two(int &x, int &y)
//* pass by reference
{
    // formal parameters
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 40;
    // swap_two(a, b);
    // swap_two(&a, &b);
    swap_two(a, b);
    cout << a << " " << b << endl;
    return 0;
}