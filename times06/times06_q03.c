
#include <stdio.h>
#include <stdlib.h>

void sort(int, int a[]);

int main(int argc, char const *argv[])
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个数,共5个\n", i + 1);
        scanf("%d", a + i);
    }
    sort(5, a);
    for (i = 0; i < 5; i++)
    {
        printf("第%d个数是:%d\n", i, a[i]);
    }
    system("pause");
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[])
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = 1; j < n - i + 1; j++)
        {
            if (a[j - 1] > a[j])
                swap(&a[j - 1], &a[j]);
        }
    }
}