
#include <stdio.h>
#include <stdlib.h>

int min(int c[]);

int main(int argc, char const *argv[])
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个数,共5个\n", i + 1);
        scanf("%d", a + i);
    }
    printf("最小的数是:%d\n", min(a));
    system("pause");
    return 0;
}

int min(int c[])
{
    int m = c[0], i;
    for (i = 1; i < 5; i++)
        m = (m > c[i]) ? c[i] : m;
    return m;
}
