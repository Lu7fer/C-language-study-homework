/** 
 * @Author : Lu7fer
 * @Date: 2020-04-06 19:10:21
 * @LastEditTime: 2020-04-16 09:57:30
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\zhihu\02_bianchengti.c
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

int main(int argc, char const *argv[])
{
    printf("请输入x的值:\n");
    float x;
    scanf("%f", &x);
    /* switch */
    switch ((int)x / 10)
    {
    case 0:
    case 1:
        printf("y=%f", 5 * x + 11);
        break;
    case 2:
    case 3:
        printf("y=%f", sin(x) + cos(x));
        break;
    case 4:
    case 5:
        printf("y=%f", exp(x) - 1);
        break;
    case 6:
    case 7:
        printf("y=%f", log(x) + 1);
        break;
    default:
        printf("y=0");
        break;
    }

    /* if */
    if (x >= 0 && x < 20)
        printf("y=%f", 5 * x + 11);
    else if (x >= 20 && x < 40)
        printf("y=%f", sin(x) + cos(x));
    else if (x >= 40 && x < 60)
        printf("y=%f", exp(x) - 1);
    else if (x >= 60 && x < 80)
        printf("y=%f", log(x) + 1);
    else
        printf("y=0");

    /* if */
    if (x >= 0)
    {
        if (x >= 20)
        {
            if (x >= 40)
            {
                if (x >= 60)
                {
                    if (x >= 80)
                        ;
                    else
                        printf("y=%f", log(x) + 1);
                }
                else
                    printf("y=%f", exp(x) - 1);
            }
            else
                printf("y=%f", sin(x) + cos(x));
        }
        else
            printf("y=%f", 5 * x + 11);
    }
    else
    {
        printf("y=0");
    }

    system("pause");
    return 0;
}
