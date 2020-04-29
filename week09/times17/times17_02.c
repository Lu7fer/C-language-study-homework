/** 
 * @Author : Lu7fer
 * @Date: 2020-04-29 10:10:22
 * @LastEditTime: 2020-04-29 10:10:22
 * @FilePath: \C-language-study-homework\week09\times17\times17_02.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software:
    you can redistribute it and/or modify it under the terms of 
the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License 
along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(int (*martix)[4]);
void print(int (*martix)[4]);

int main(int argc, char const *argv[])
{
    int martix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    print(martix);
    printf("rverse:\n");
    reverse(martix);
    print(martix);
    system("pause");
    return 0;
}

void reverse(int (*martix)[4])
{
    int i, j, tmp;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            tmp = martix[i][j];
            martix[i][j] = martix[j][i];
            martix[j][i] = tmp;
        }
    }
}

void print(int (*martix)[4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", martix[i][j]);
        }
        printf("\n");
    }
}