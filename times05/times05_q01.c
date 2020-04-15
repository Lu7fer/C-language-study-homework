/*
 * @author: 2019407229_程曾
 * @Date: 2020-03-18 08:44:47
 * @LastEditTime: 2020-03-18 09:21:05
 */

#include <stdio.h>
#include <stdlib.h>

void f(int n);

int main(int argc, char const *argv[])
{
    f(4);
    printf("\n");
    system("pause");
    return 0;
}

void f(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        f(n - 1);
    }
}
