/** 
 * @Author : Lu7fer
 * @Date: 2020-03-01 23:23:08
 * @LastEditTime: 2020-04-16 09:56:40
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times01\times01_q02.c
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

#include "stdlib.h"
#include "stdio.h"

float input(int);
float min(int, float *);
float average(int, float *);

int main(int argc, char const *argv[])
{
    int i;
    float arr[5];
    printf("请输入5个小数\n");
    for (i = 0; i < 5; i++)
    {
        arr[i] = input(i + 1);
    }
    printf("最小的数是:%f\n", min(5, arr));
    printf("平均数是:%f\n", average(5, arr));
    system("pause");
    return 0;
}

float input(int i)
{
    float f;
    printf("请输入第%d个小数:\n", i);
    scanf("%f", &f);
    return f;
}

float min(int count, float *arr)
{
    float min;
    int i;
    for (i = 1, min = arr[0]; i < count; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

float average(int count, float *arr)
{
    float sum = 0;
    int i;
    for (i = 0; i < count; i++)
        sum += arr[i];
    return sum / count;
}