#include <stdio.h>

/*
return type name(parameter)
{
    code
    return what?
}
 */
//* Function for add two number (using in upper part).
/*
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
*/

int sum(int a, int b); //*using in lower part

int main()
{
    printf("%d ", sum(10, 20));
    printf("%d", sum(100, 200));
    return 0;
}

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}