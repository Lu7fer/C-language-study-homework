/** 
 * @Author : Lu7fer
 * @Date: 2020-03-28 16:33:35
 * @LastEditTime: 2020-04-16 09:52:15
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times08\times08_q02-01.c
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

/* times08_q02-01.c */
#include <stdlib.h>
#include <stdio.h>
// #include "times08_q02-02.c"
int A = 1;
extern int func(int i);
int main(int argc, char const *argv[])
{
    printf("origin A=%d\n",A);
    func(3);
    printf("then A=%d\n",A);
    system("pause");
    return 0;
}
