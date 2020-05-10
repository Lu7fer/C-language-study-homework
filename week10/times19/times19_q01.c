/** 
 * @Author : Lu7fer
 * @Date: 2020-05-07 09:37:34
 * @LastEditTime: 2020-05-07 09:37:34
 * @FilePath: \C-language-study-homework\week10\times19\times19_q01.c
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
//#include <wchar.h>
#include <stdlib.h>

struct date
{
    int yesr;
    int month;
    int day;
};
struct student
{
    int num;
    char name[20];
    char gender[3];
    int age;
    struct date birthday;
    char address[50];
};
