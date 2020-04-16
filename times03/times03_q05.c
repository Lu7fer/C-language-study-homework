
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int judge(int);

int main(int argc, char const *argv[])
{
    int number = 5;
    switch (judge(number))
    {
    case 0:
    {
        printf("%d是合数\n", number);
        break;
    }
    case 1:
    {
        printf("%d是素数\n", number);
        break;
    }
    default:
        printf("Error:%d\n", number);
        break;
    }
    system("pause");
    return 0;
}

int judge(int number)
{
    if (number < 2)
        return -1;
    int i;
    for (i = 2; i <= (int)sqrt(number); i++)
    {
        if (0 == (number % i))
        {
            return 0;
        }
    }
    return 1;
}