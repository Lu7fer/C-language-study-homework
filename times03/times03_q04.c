/*
 * @author: 2019407229_程曾
 * @LastEditTime: 2020-03-10 20:04:44
 */

#include <stdio.h>
#include <stdlib.h>

int judge(int);

int main(int argc, char const *argv[])
{
    int number = 17;
    switch (judge(number))
    {
    case 0:
    {
        printf("%d是偶数\n", number);
        break;
    }
    case 1:
    {
        printf("%d是奇数\n", number);
        break;
    }
    default:
        printf("Error\n");
        break;
    }
    system("pause");
    return 0;
}

int judge(int number)
{
    return (number % 2);
}