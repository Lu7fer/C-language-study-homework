/** 
 * @Author : Lu7fer
 * @Date: 2020-06-05 18:45:35
 * @LastEditTime: 2020-06-05 18:45:35
 * @FilePath: \C-language-study-homework\week14\times28\test.c
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

#define openwith(X, Y, Z, A)           \
    FILE *X;                           \
    if ((X = fopen(Y, Z)))             \
    {                                  \
        A                              \
            fclose(X);                 \
    }                                  \
    else                               \
    {                                  \
        printf("%s can't open!\n", Y); \
        system("pause");               \
        exit(1);                       \
    }

int main(int argc, char const *argv[])
{
    openwith(src, "week14\\times28\\test.txt", "w",
             fprintf(src, "test\nasdf"););
    return 0;
}
