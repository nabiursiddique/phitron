#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10000];
        scanf("%s", s);
        int capitalAlphabet = 0, smallAlphabet = 0, digit = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitalAlphabet++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                smallAlphabet++;
            }
            else
            {
                digit++;
            }
        }
        printf("%d %d %d", capitalAlphabet, smallAlphabet, digit);
        printf("\n");
    }
    return 0;
}