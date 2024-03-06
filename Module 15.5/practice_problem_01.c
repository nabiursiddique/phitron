#include <stdio.h>
#include <stdlib.h>

int my_abs(int n)
{
    int absNum = abs(n);
    printf("%d", absNum);
}

int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}