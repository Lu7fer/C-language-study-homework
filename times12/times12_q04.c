

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arr[5], i;
    printf("please enter five numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", arr + i);
    for (i = 0; i < 5; i++)
        printf("%-5d", *(arr + i));
    system("pause");
    return 0;
}
