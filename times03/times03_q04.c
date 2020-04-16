
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