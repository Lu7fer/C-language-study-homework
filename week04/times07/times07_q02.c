/** 
 * @Author : Lu7fer
 * @Date: 2020-03-27 22:53:31
 * @LastEditTime: 2020-04-16 09:52:23
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times07\times07_q02.c
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
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
