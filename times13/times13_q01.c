/** 
 * @Author : Lu7fer
 * @Date: 2020-04-14 18:46:03
 * @LastEditTime: 2020-04-16 09:48:35
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times13\times13_q01.c
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

void sub(int count, int *arr);
void print_arr(int count, int *arr);

int main(int argc, char const *argv[])
{
    int arr[5] = {44, 55, 66, 77, 88};
    printf("before:\n");
    print_arr(5, arr);
    sub(5, arr);
    printf("after:\n");
    print_arr(5, arr);
    system("pause");
    return 0;
}

void print_arr(int count, int *arr)
{
    int i;
    for (i = 0; i < count; i++)
        printf("%-4d", *(arr + i));
    putchar('\n');
}

void sub(int count, int *arr)
{
    int i;
    for (i = 0; i < count; i++)
        *(arr + i) -= 5;
}
