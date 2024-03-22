#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    //* Manual system
    /*
    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    */
    //* Built In function
    strcpy(a, b);
    printf("%s %s", a, b);
    return 0;
}