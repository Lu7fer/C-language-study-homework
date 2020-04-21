/** 
 * @Author : Lu7fer
 * @Date: 2020-04-10 23:00:00
 * @LastEditTime: 2020-04-16 09:50:41
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times12\times12_q03.c
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
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p0 = &arr[0], *p1 = &arr[0], *p2 = &arr[1];
    printf("%d\n", p2 - p1);
    printf("%d,%d\n", *(&arr[2]), arr[2]);
    printf("%d,%d,%d\n", *p0 + 2, *arr + 2, arr[2]);
    printf("%d,%d,%d,%d\n", *p0 + 2, *arr + 2, arr[2], p0[2]);
    system("pause");
    return 0;
}
