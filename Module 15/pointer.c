#include <stdio.h>
int main()
{
    int x = 100;
    int *pointer = &x;
    // printf("x er address- %p\n", &x);
    // printf("pointer er value- %p\n", pointer);
    // printf("pointer er address- %p\n", &pointer);

    //! x = *pointer (x r *pointer duita same kotha)

    //* x = 200;
    *pointer = 200;
    printf("x er value- %d\n", x);
    printf("x er value after dereferencing- %d\n", *pointer);
    return 0;
}