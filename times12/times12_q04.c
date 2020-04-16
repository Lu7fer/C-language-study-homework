/** 
 * @Author : Lu7fer
 * @Date: 2020-04-10 23:00:11
 * @LastEditTime: 2020-04-16 09:50:37
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times12\times12_q04.c
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
    int arr[5], i;
    printf("please enter five numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", arr + i);
    for (i = 0; i < 5; i++)
        printf("%-5d", *(arr + i));
    system("pause");
    return 0;
}
