/** 
 * @Author : Lu7fer
 * @Date: 2020-04-29 19:37:39
 * @LastEditTime: 2020-04-29 19:37:40
 * @FilePath: \C-language-study-homework\zTest\....c
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

int riqi[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days(int day, int year, int month)
{
    int m;
    int psum = 0;
    for (m = 1; m <= month; m++)
        psum += riqi[m];
    if (month <= 2)
        return psum + day;
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return psum + day + 1;
    else
        return psum + day;
}
int main()
{
    struct years
    {
        int day;
        int month;
        int year;
    };
    struct years y;
    printf("请输入日期");
    scanf("%d", &y.day);
    getchar();
    printf("请输入月份");
    scanf("%d", &y.month);
    getchar();
    printf("请输入年份");
    scanf("%d", &y.year);
    getchar();
    int result = days(y.day, y.year, y.month);
    printf("%d年%d月是当年的第%d天", y.year, y.month, result);
    system("pause");
    return 0;
}
