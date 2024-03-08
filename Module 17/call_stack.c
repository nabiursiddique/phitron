#include <stdio.h>
void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("hello start\n");
    world();
    printf("hello end\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main end\n");
    return 0;
}