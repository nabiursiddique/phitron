#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

/*
void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

int main()
{
    //* For two number
    // int a, b;
    // cin >> a >> b;
    // int c = min(a, b);
    // int d = max(a, b);
    // cout << "Min number: " << c << endl;
    // cout << "Max number: " << d << endl;

    //* For more than two number
    // int a, b, c, d;
    // cin >> a >> b >> c >> d;
    // int minimum = min({a, b, c, d});
    // int maximum = max({a, b, c, d});
    // cout << "Minimum number: " << minimum << endl;
    // cout << "Maximum number: " << maximum << endl;
    // return 0;

    //* Swap two numbers(with the help of function)
    //? Function dea swap korle pointer dea korte hobe.
    /*
    int a, b;
    cin >> a >> b;
    my_swap(&a, &b);
    cout << a << " " << b;
    */

    //* Swap two numbers using swap function
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
}