#include <stdio.h>
void printSentence(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    printSentence(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printSentence(n);
    return 0;
}