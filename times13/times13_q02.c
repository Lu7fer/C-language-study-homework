
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int count, int *arr)
{
    int i, j, tmp;
    for (i = 0; i < count; i++)
    {
        for (j = 1; j < count - i; j++)
        {
            if (*(arr + j - 1) > *(arr + j))
            {
                tmp = *(arr + j - 1);
                *(arr + j - 1) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
}

void print_arr(int count, int *arr)
{
    int i;
    for (i = 0; i < count; i++)
        printf("%-4d", *(arr + i));
    putchar('\n');
}

int main(int argc, char const *argv[])
{
    int arr[10];
    srand((unsigned int)time(NULL));
    int i;
    for (i = 0; i < 10; i++)
        *(arr + i) = rand() % 255;
    printf("before:\n");
    print_arr(10, arr);
    sort(10, arr);
    printf("after:\n");
    print_arr(10, arr);
    system("pause");
    return 0;
}
