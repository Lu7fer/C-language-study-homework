/** 
 * @ *Author : Lucifer_程曾
 * @Date: 2020-03-27 22:53:31
 * @LastEditTime: 2020-03-28 00:00:07
 * @Description: Programmed by Lucifer
 */

#include <stdio.h>
#include <stdlib.h>
/* 全局变量声明 */
int a = 20;

int main(int argc, char const *argv[])
{
    {
        /* 局部变量声明 */
        int a = 10;
        {
            /* 另一个局部变量*/
            int a = 5;
            printf("value of a in another local variablb = %d\n", a);
        }
        printf("value of a in local variable = %d\n", a);
    }
    printf("value of a global variable = %d\n", a);
    system("pause");
    return 0;
}
