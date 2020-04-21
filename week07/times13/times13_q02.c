/** 
 * @Author : Lu7fer
 * @Date: 2020-04-14 19:18:19
 * @LastEditTime: 2020-04-16 09:48:56
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times13\times13_q02.c
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
#include <time.h>

void sort(int count, int *arr)
{
    int i, j, tmp;
    for (i = 0; i < count; i++)
    {
        for (j = 1; j < count - i; j++)
        {
            if (*(arr + j - 1) > *(arr + j))
            {
                tmp = *(arr + j - 1);
                *(arr + j - 1) = *(arr + j);
                *(arr + j) = tmp;
            }
        }
    }
}

void print_arr(int count, int *arr)
{
    int i;
    for (i = 0; i < count; i++)
        printf("%-4d", *(arr + i));
    putchar('\n');
}

int main(int argc, char const *argv[])
{
    int arr[10];
    srand((unsigned int)time(NULL));
    int i;
    for (i = 0; i < 10; i++)
        *(arr + i) = rand() % 255;
    printf("before:\n");
    print_arr(10, arr);
    sort(10, arr);
    printf("after:\n");
    print_arr(10, arr);
    system("pause");
    return 0;
}
