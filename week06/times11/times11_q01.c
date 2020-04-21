/** 
 * @Author : Lu7fer
 * @Date: 2020-04-09 20:31:04
 * @LastEditTime: 2020-04-16 10:08:13
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times11\times11_q01.c
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright
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
    int *maxptr, *minptr, *tmpptr, n1, n2;
    printf("please enter two different numbers:\n");
    scanf("%d%d", &n1, &n2);
    maxptr = &n1;
    minptr = &n2;
    if (n1 < n2)
    {
        tmpptr = maxptr;
        maxptr = minptr;
        minptr = tmpptr;
    }
    printf("max is %d,min is %d", *maxptr, *minptr);
    system("pause");
    return 0;
}
