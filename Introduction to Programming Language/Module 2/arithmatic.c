#include <stdio.h>
int main()
{
    int a = 5, b = 20;
    int sum = a + b;
    int minus = b - a;
    int multi = a * b;
    int divide = b * 1.0 / a;
    int mod = a % b;
    printf("%d %d %d\n", sum, minus, multi);
    printf("%d\n", divide);
    printf("%d", mod);
    return 0;
}