/*
 * @author: 2019407229_程曾
 * @LastEditTime: 2020-03-15 16:36:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int greatest_common_divisor(int num1, int num2);
int least_common_multiple(int num1, int num2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("请输入2个整数,使用空格分隔,下面将会求得最大公约数与最小公倍数:\n");
    scanf("%d%d", &num1, &num2);
    printf("%d与%d的最小公约数是%d,最大公倍数是%d\n", num1, num2, greatest_common_divisor(num1, num2), least_common_multiple(num1, num2));
    system("pause");
    return 0;
}

int greatest_common_divisor(int num1, int num2)
{
    //两数不能有0
    if (!(num1 || num2))
    {
        //0不是公约数,退出程序
        printf("输入有误!\n");
        system("pause");
        exit(0);
    }
    //两数相等直接返回
    if (num2 == num1)
        return num1;
    int i, common_divisor = 1;
    for (i = 1; i <= ((num1 > num2) ? num2 : num1); i++)
    {
        if (!((num1 % i) || (num2 % i)))
            common_divisor = i;
    }
    return common_divisor;
}

int least_common_multiple(int num1, int num2)
{
    return num1 * num2 / greatest_common_divisor(num1, num2);
}
