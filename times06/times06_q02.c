/*
 * @author: 2019407229_程曾
 * @Date: 2020-03-19 17:08:13
 * @LastEditTime: 2020-03-19 18:47:27
 */

#include <stdio.h>
#include <stdlib.h>

void add(int, int a[]);

int main(int argc, char const *argv[])
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d位成绩,共5位\n", i + 1);
        scanf("%d", a + i);
    }
    add(5, a);
    for (i = 0; i < 5; i++)
    {
        printf("第%d个数是:%d\n", i, a[i]);
    }

    system("pause");
    return 0;
}

void add(int n, int a[])
{
    int i;
    for (i = 0; i < 5; i++)
        a[i] = (a[i] < 60) ? a[i] + n : a[i];
}