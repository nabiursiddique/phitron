#include <stdio.h>
int main()
{
    // char a[5] = {'n', 'a', 'b', 'i', 'l'};
    char a[] = "Nabil";
    int sz = sizeof(a) / sizeof(char);
    printf("%d \n", sz);
    printf("%s", a);
    /*
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }
    */
    return 0;
}