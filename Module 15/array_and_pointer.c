#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // printf("0th index er address- %p\n", &arr[0]);
    // printf("0th index er address- %p\n", arr);

    printf("0th index er value- %d\n", arr[0]);
    printf("0th index er value- %d\n", *arr);

    //? we get value of an array by these four method
    //! behind the scene 1st ta 3rd a convert hosse r 2nd the fourth a convert hosse
    printf("1st index er value- %d\n", arr[1]);
    printf("1st index er value- %d\n", 1 [arr]);
    printf("1st index er value- %d\n", *(arr + 1));
    printf("1st index er value- %d\n", *(1 + arr));

    printf("2nd index er value- %d\n", *(arr + 2));
    return 0;
}