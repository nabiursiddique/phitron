#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);

    //* Logic for string length
    /*
    int count = 0;
    while (a[i] != 0)
    {
        count++;
        i++;
    }
    */
    /*
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    */

    //* Built in function for string length
    int st = strlen(a);
    printf("%d\n", st);
    return 0;
}