#include <stdio.h>
void fun(int x)
{
    printf("Fun er x er address %p\n", &x);
}
int main()
{
    int x = 10;
    printf("Main x er address %p\n", &x);
    fun(x);
    return 0;
}