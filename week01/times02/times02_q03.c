/** 
 * @Author : Lu7fer
 * @Date: 2020-03-05 11:16:15
 * @LastEditTime: 2020-04-16 09:56:11
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times02\times02_q03.c
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
#include <windows.h>

void println_7();
void println_5();
void println_3();
void println_1();
int main(int argc, char const *argv[])
{
    println_7();
    Sleep(1000);
    println_5();
    Sleep(1000);
    println_3();
    Sleep(1000);
    println_1();
    Sleep(1000);
    system("pause");
    return 0;
}

void println_7()
{
    printf("*******\n");
}
void println_5()
{
    printf("       *****\n");
}
void println_3()
{
    printf("            ***\n");
}
void println_1()
{
    printf("                *\n");
}