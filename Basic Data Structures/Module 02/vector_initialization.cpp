#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* Initializing vector in different ways

    // vector<int> v; //! type-01
    // vector<int> v(5); //! type-02
    // vector<int> v(5, 10); //! type-03

    //* we can copy one vector to another vector
    // vector<int> v2(5, 100); //! type-04
    // vector<int> v(v2); //! type-04

    //* we can create a vector by coping elements from an array
    // int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v(a, a + 5);

    vector<int> v = {10, 20, 30};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    return 0;
}