#include <bits/stdc++.h>
using namespace std;

namespace Nabil
{
    int age = 19;
    void hello()
    {
        cout << "Nabil Namespace" << endl;
    }
}

namespace Arnob
{
    int age2 = 22;
    void hello2()
    {
        cout << "Arnob Namespace" << endl;
    }
}

using namespace Nabil;
using namespace Arnob;

int main()
{
    // cout << Nabil::age << endl;
    // cout << Arnob::age2 << endl;

    cout << age << endl;
    cout << age2 << endl;
    return 0;
}

// we can put everything in namespace variable, function, class, object.