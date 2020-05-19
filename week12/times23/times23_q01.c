/** 
 * @Author : Lu7fer
 * @Date: 2020-05-19 11:05:56
 * @LastEditTime: 2020-05-19 11:05:57
 * @FilePath: \C-language-study-homework\week12\times23\times23_q01.c
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

struct date
{
    int year;
    int month;
    int day;
} day;

int days(struct date day)
{
    int days = 0;
    switch (day.month - 1)
    {
    case 11:
        days += 30;
    case 10:
        days += 31;
    case 9:
        days += 30;
    case 8:
        days += 31;
    case 7:
        days += 31;
    case 6:
        days += 30;
    case 5:
        days += 31;
    case 4:
        days += 30;
    case 3:
        days += 31;
    case 2:
        if (((day.year % 4 == 0) && (day.year % 100 != 0)) || (day.year % 400 == 0))
            days += 29;
        else
            days += 28;
    case 1:
        days += 31;
    default:
        break;
    }
    return days + (day.day);
}

int main(int argc, char const *argv[])
{
    struct date day = {2020, 3, 1};
    printf("%d年%d月%d日是这一年的第%d天\n", day.year, day.month, day.day, days(day));
    day.year = 2019;
    printf("%d年%d月%d日是这一年的第%d天\n", day.year, day.month, day.day, days(day));
    system("pause");
    return 0;
}
