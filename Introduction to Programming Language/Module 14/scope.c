#include <stdio.h>

// Global
int x = 500;

void fun(void)
{
    int s = 100;
    printf("Fun er s er address - %p\n", &s);
}
int main()
{
    int s = 200;
    printf("Main er s er address - %p\n", &s);
    fun();
    printf("%d", x);
    return 0;
}