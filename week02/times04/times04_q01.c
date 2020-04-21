/** 
 * @Author : Lu7fer
 * @Date: 2020-03-12 16:16:36
 * @LastEditTime: 2020-04-16 09:55:13
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times04\times04_q01.c
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

float max_with_3nums(float n1, float n2, float n3);
float max_with_2nums(float n1, float n2);

int main(int argc, char const *argv[])
{
    float num1, num2, num3;
    printf("请输入3个数,使用空格分隔\n");
    scanf("%f%f%f", &num1, &num2, &num3);
    printf("最大数为:%f\n", max_with_3nums(num1, num2, num3));
    system("pause");
    return 0;
}

float max_with_3nums(float n1, float n2, float n3)
{
    return (max_with_2nums(n1, n2) > n3) ? max_with_2nums(n1, n2) : n3;
}

float max_with_2nums(float n1, float n2)
{
    return (n1 > n2) ? n1 : n2;
}
