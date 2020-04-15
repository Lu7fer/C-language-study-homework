/*
 * @author: 2019407229_程曾
 * @LastEditTime: 2020-03-10 19:27:17
 */

#include <stdio.h>
#include <stdlib.h>

void println_star(int );

int main(int argc, char const *argv[])
{
    println_star(4);
    system("pause");
    return 0;
}

void println_star(int lines)
{
    if (lines <= 0)
        return;
    int i;
    for (i = 0; i < lines; i++)
    {
        printf("**********\n");
    }
}
