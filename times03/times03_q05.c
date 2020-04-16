/** 
 * @Author : Lu7fer
 * @Date: 2020-03-10 19:49:50
 * @LastEditTime: 2020-04-16 09:55:18
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times03\times03_q05.c
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
#include <math.h>

int judge(int);

int main(int argc, char const *argv[])
{
    int number = 5;
    switch (judge(number))
    {
    case 0:
    {
        printf("%d是合数\n", number);
        break;
    }
    case 1:
    {
        printf("%d是素数\n", number);
        break;
    }
    default:
        printf("Error:%d\n", number);
        break;
    }
    system("pause");
    return 0;
}

int judge(int number)
{
    if (number < 2)
        return -1;
    int i;
    for (i = 2; i <= (int)sqrt(number); i++)
    {
        if (0 == (number % i))
        {
            return 0;
        }
    }
    return 1;
}