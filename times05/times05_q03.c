/** 
 * @Author : Lu7fer
 * @Date: 2020-03-18 09:39:32
 * @LastEditTime: 2020-04-16 09:54:52
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times05\times05_q03.c
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

int f(int n);

int main(int argc, char const *argv[])
{
    printf("%d\n", f(4));
    system("pause");
    return 0;
}

int f(int n)
{
    if (n == 1)
        return 1;
    return n * f(n - 1);
}
