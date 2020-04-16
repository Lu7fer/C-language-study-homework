/** 
 * @Author : Lu7fer
 * @Date: 2020-04-10 20:11:02
 * @LastEditTime: 2020-04-16 09:51:07
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times11\times11_q04.c
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

void swap(int *a, int *b)
{
    int *tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("please enter two different numbers:\n");
    scanf("%d%d", &n1, &n2);
    printf("before swap: %d   %d\n", n1, n2);
    swap(&n1, &n2);
    printf("after swap: %d   %d\n", n1, n2);
    system("pause");
    return 0;
}
