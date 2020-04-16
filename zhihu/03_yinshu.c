/** 
 * @Author : Lu7fer
 * @Date: 2020-04-09 21:50:57
 * @LastEditTime: 2020-04-16 09:57:39
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\zhihu\03_yinshu.c
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
