/*
 * @author: 2019407229_程曾
 * @Date: 2020-03-18 09:39:32
 * @LastEditTime: 2020-03-18 10:08:18
 */

#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main(int argc, char const *argv[])
{
    printf("%d\n", f(4));
    system("pause");
    return 0;
}

int f(int n)
{
    if (n == 1)
        return 1;
    return n * f(n - 1);
}
