

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p0 = &arr[0], *p1 = &arr[0], *p2 = &arr[1];
    printf("%d\n", p2 - p1);
    printf("%d,%d\n", *(&arr[2]), arr[2]);
    printf("%d,%d,%d\n", *p0 + 2, *arr + 2, arr[2]);
    printf("%d,%d,%d,%d\n", *p0 + 2, *arr + 2, arr[2], p0[2]);
    system("pause");
    return 0;
}
