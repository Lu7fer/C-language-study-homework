/** 
 * @Author : Lu7fer
 * @Date: 2020-03-19 16:42:43
 * @LastEditTime: 2020-04-16 09:52:40
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times06\times06_q01.c
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

int min(int c[]);

int main(int argc, char const *argv[])
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个数,共5个\n", i + 1);
        scanf("%d", a + i);
    }
    printf("最小的数是:%d\n", min(a));
    system("pause");
    return 0;
}

int min(int c[])
{
    int m = c[0], i;
    for (i = 1; i < 5; i++)
        m = (m > c[i]) ? c[i] : m;
    return m;
}
