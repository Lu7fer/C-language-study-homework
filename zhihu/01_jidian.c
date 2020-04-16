/** 
 * @Author : Lu7fer
 * @Date: 2020-04-06 17:44:52
 * @LastEditTime: 2020-04-16 10:08:24
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\zhihu\01_jidian.c
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
    printf("请输入成绩:\n");
    int score;
    scanf("%d", &score);
    /* 使用Switch */
    /* switch (score / 10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Failed\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            if (score < 101)
            {
                printf("绩点为:%d.%d\n", score / 10 - 5, score % 10);
                break;
            }
        default:
            printf("Invalid\n");
            break;
    } */

    /* 使用if else*/
    if (score < 60 && score > -1)
        printf("Failed\n");
    else if (score < 101 && score > 59)
        printf("绩点为:%d.%d\n", score / 10 - 5, score % 10);
    else
        printf("Invalid\n");

    system("pause");
    return 0;
}
