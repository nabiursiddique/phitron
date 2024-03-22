#include <stdio.h>
int main()
{
    double x = 5.26;
    double *pointer = &x;
    double *pointer2 = pointer;
    // *pointer = 10.52;
    *pointer2 = 100.520;

    printf("x er value- %0.2lf\n", x);
    printf("x er value- %0.2lf\n", *pointer);
    printf("x er value- %0.2lf\n", *pointer2);
    printf("pointer er address- %p\n", &pointer);
    printf("pointer2 er address- %p\n", *pointer2);
    printf("pointer2 er value- %0.2lf\n", *pointer2);
    printf("size of pointer- %d\n", sizeof(pointer));
    return 0;
}