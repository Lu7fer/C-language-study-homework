/*
 * @author: 2019407229_程曾
 * @Date: 2020-03-18 09:27:21
 * @LastEditTime: 2020-03-18 09:28:16
 */

#include <stdio.h>
#include <stdlib.h>

void f(int n);

int main(int argc, char const *argv[])
{
    f(1);
    printf("\n");
    system("pause");
    return 0;
}

void f(int n)
{
    if (n < 5)
    {
        printf("%d", n);
        f(n + 1);
    }
}
