/** 
 * @Author : Lu7fer
 * @Date: 2020-04-28 13:33:57
 * @LastEditTime: 2020-04-28 13:33:58
 * @FilePath: \C-language-study-homework\week09\times17\times17_q01.c
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

void inputs(float *arr, int size);
void change(float *arr, int size);
void print(float *arr, int size);

int main(int argc, char const *argv[])
{
    float arr[5];
    inputs(arr, 5);
    change(arr, 5);
    print(arr, 5);
    system("pause");
    return 0;
}

void inputs(float *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("请输入第%d个小数:\n", i + 1);
        scanf("%f", arr + i);
    }
}

void change(float *arr, int size)
{
    int i;
    float *max = arr, *min = arr;
    for (i = 1; i < size; i++)
    {
        max = (*max < *(arr + i)) ? max : arr + i;
        min = (*min > *(arr + i)) ? min : arr + i;
    }
    float tmp;
    tmp = *max;
    *max = *arr;
    *arr = tmp;
    tmp = *min;
    *min = *(arr + size - 1);
    *(arr + size - 1) = tmp;
}

void print(float *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%f   ", *(arr + i));
    }
}
