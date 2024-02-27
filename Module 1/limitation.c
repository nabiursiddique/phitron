#include <stdio.h>
int main()
{
    int a = 1000000000;
    long long int b = 10000000009;
    float f = 20.40003;
    double d = 299.23425232343;
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%f\n", f);
    printf("%0.15lf", d);
    return 0;
}