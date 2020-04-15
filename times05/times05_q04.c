/*
 * @author: 2019407229_程曾
 * @Date: 2020-03-18 10:08:09
 * @LastEditTime: 2020-03-18 10:16:41
 */

#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main(int argc, char const *argv[])
{
    printf("%d\n", f(5));
    system("pause");
    return 0;
}

int f(int n)
{
    if (n < 1)
        return 0;
    if (n % 2)
        return n + f(n - 1);
    else
        return f(n - 1);
}