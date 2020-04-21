/** 
 * @Author : Lu7fer
 * @Date: 2020-03-02 00:14:57
 * @LastEditTime: 2020-04-16 09:56:20
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times01\times01_q04.c
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
    char sharp = '#';
    char star = '*';
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("%c", sharp);
        for (j = 0; j < i + 1; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }

    printf("\n---------------\n");

    char dollar = '$';
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (j < 4 - (i + 1))
                printf("%c", sharp);
            else
                printf("%c", dollar);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
