#include <stdio.h>
int main()
{
    int x = 10;
    // Getting the address
    printf("%p\n", &x);

    // Setting the address to the pointer
    int *p = &x;
    printf("%p\n", p);

    // dereference(means getting/accessing the value from the address)
    printf("%d\n", *p);

    // changing the value using the pointer
    *p = 500;
    printf("%d", x);
    return 0;
}

//* pointer value rakhe na rake address