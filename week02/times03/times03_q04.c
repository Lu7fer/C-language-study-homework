/** 
 * @Author : Lu7fer
 * @Date: 2020-03-10 19:41:00
 * @LastEditTime: 2020-04-16 09:55:21
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times03\times03_q04.c
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

int judge(int);

int main(int argc, char const *argv[])
{
    int number = 17;
    switch (judge(number))
    {
    case 0:
    {
        printf("%d是偶数\n", number);
        break;
    }
    case 1:
    {
        printf("%d是奇数\n", number);
        break;
    }
    default:
        printf("Error\n");
        break;
    }
    system("pause");
    return 0;
}

int judge(int number)
{
    return (number % 2);
}