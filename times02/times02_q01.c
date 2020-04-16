/** 
 * @Author : Lu7fer
 * @Date: 2020-03-05 10:32:43
 * @LastEditTime: 2020-04-16 09:56:16
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times02\times02_q01.c
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

void println_sharp()
{
    printf("##############\n");
}
void println_star()
{
    printf("********************\n");
}
void println_coming()
{
    printf("函数，我来了！\n");
}
void println_conquer()
{
    printf("函数，我要征服你！\n");
}
int main(int argc, char const *argv[])
{
    println_sharp();
    println_coming();
    println_star();
    println_conquer();
    println_sharp();
    system("pause");
    return 0;
}
