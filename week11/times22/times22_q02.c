/** 
 * @Author : Lu7fer
 * @Date: 2020-05-14 10:10:48
 * @LastEditTime: 2020-05-14 10:10:48
 * @FilePath: \C-language-study-homework\week11\times22\times22_q02.c
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
#include <stdlib.h>

//红 黄 蓝 白 黑 绿
enum COLOR
{
    red,
    yellow,
    blue,
    white,
    black,
    green
};
typedef enum COLOR COLOR;

void print(int);

int main(int argc, char const *argv[])
{
    COLOR i, j, k;
    size_t count = 0;
    for (i = red; i <= green; i++)
    {
        for (j = red; j <= green; j++)
        {
            for (k = red; k <= green; k++)
            {
                //不同颜色
                if (i != j && j != k && k != i)
                {
                    count++;
                    printf("%d:\t", count);
                    print(i);
                    print(j);
                    print(k);
                    printf("\n");
                }
            }
        }
    }
    printf("\n%d\n", count);
    system("pause");
    return 0;
}
void print(int a)
{
    //红 黄 蓝 白 黑 绿
    switch (a)
    {
    case red:
        printf("红 ");
        break;
    case yellow:
        printf("黄 ");
        break;
    case blue:
        printf("蓝 ");
        break;
    case white:
        printf("白 ");
        break;
    case black:
        printf("黑 ");
        break;
    case green:
        printf("绿 ");
        break;
    default:
        break;
    }
}