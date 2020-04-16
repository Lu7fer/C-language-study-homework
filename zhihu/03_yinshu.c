/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-09 21:50:57
 * @LastEditTime: 2020-04-09 21:56:51
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\zhihu\03_yinshu.c
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    printf("输入一个整数:\n");
    int num, i;
    scanf("%d", &num);
    printf("因数有:\n");
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d   ", i);
        }
    }
    system("pause");
    return 0;
}
