/** 
 * @Author : Lu7fer
 * @Date: 2020-03-10 19:27:05
 * @LastEditTime: 2020-04-16 09:55:24
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times03\times03_q03.c
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

int min(int, int, int);

int main(int argc, char const *argv[])
{
    int var_a = 20, var_b = 17, var_c = 36;
    printf("最小的数是:%d\n", min(var_a, var_b, var_c));
    system("pause");
    return 0;
}

int min(int var_a, int var_b, int var_c)
{
    int min = var_a;
    min = (var_b < min) ? var_b : min;
    min = (var_c < min) ? var_c : min;
    return min;
}