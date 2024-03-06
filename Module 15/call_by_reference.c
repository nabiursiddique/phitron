#include <stdio.h>

void fun(int *pointer)
{
    // printf("main er x er value- %d\n", *pointer);
    *pointer = 500;
}

int main()
{
    int x = 100;
    printf("x er address- %p\n", &x);
    fun(&x);
    printf("x er address- %d\n", x);
    return 0;
}