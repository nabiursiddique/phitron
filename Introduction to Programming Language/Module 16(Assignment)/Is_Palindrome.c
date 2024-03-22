#include <stdio.h>
#include <string.h>
int is_palindrome(char arr[])
{
    int first = 0;
    int last = strlen(arr);

    while (first < last)
    {
        if (arr[first] == arr[last - 1])
        {
            first++;
            last--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char c[1000];
    scanf("%s", c);
    int value = is_palindrome(c);
    if (value == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}