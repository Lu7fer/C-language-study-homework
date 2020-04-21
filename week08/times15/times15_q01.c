/** 
 * @Author : Lu7fer
 * @Date: 2020-04-21 11:50:43
 * @LastEditTime: 2020-04-21 11:59:46
 * @FilePath: \C-language-study-homework\week08\times15\times15_q01.c
 * @Stu_ID: 2019X....X229_Lu7fer
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
    char dest[] = "This is destination!";
    char src[] = "This is sorce!";
    char *d, *s;
    d = dest;
    s = src;
    puts(dest);
    do
    {
        *(d++) = *s;
    } while (*(s++) != '\0');
    puts(dest);
    system("pause");
    return 0;
}
