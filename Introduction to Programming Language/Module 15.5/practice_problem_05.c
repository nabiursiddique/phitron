#include <stdio.h>
int swap_it(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", *a, *b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    return 0;
}