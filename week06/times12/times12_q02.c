/** 
 * @Author : Lu7fer
 * @Date: 2020-04-10 22:54:38
 * @LastEditTime: 2020-04-16 09:50:53
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times12\times12_q02.c
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
void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
void exchange(int *p1, int *p2, int *p3)
{
    if (*p1 < *p2)
        swap(p1, p2);
    if (*p1 < *p3)
        swap(p1, p3);
    if (*p2 < *p3)
        swap(p2, p3);
}

int main(int argc, char const *argv[])
{
    int *ptr1, *ptr2, *ptr3, n1, n2, n3;
    printf("please enter three different numbers:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("order is %d  %d  %d \n", *ptr1, *ptr2, *ptr3);
    system("pause");
    return 0;
}
