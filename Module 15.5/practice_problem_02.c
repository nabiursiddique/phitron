#include <stdio.h>
#include <string.h>

int my_len(char *c)
{
    int count = 0;
    while (c[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char c[100];
    scanf("%s", c);
    printf("%d", my_len(c));
    return 0;
}