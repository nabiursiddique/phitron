#include <stdio.h>
#include <string.h>
int main()
{
    char a[18];
    //* Taking string input using gets
    // gets(a);

    //* Taking string input using fgets
    fgets(a, 18, stdin);

    //* fgets inter input ney, gets ba baki gulo nai na
    printf("%s", a);
    return 0;
}