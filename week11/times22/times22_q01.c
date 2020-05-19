/** 
 * @Author : Lu7fer
 * @Date: 2020-05-14 10:02:56
 * @LastEditTime: 2020-05-14 10:02:57
 * @FilePath: \C-language-study-homework\week11\times22\times22_q01.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Weekday
    {
        sun = 100,
        mon,
        tue,
        wed,
        thu,
        fri,
        sat
    }; /*枚举常量*/
    enum Weekday i;
    enum Weekday workday, weekend; //枚举变量
    workday = tue;
    printf("%d\n", workday);
    workday = sat;
    printf("%d\n", workday);
    if (workday == sat)
        printf("星期六\n");
    else if (workday == 6)
        printf("星期六\n");
    else
        printf("8d, &d, &d, 8d, 8d, 8d, &d\n", sun, mon, tue, wed, thu, fri, sat);
    for (i = sun; i <= sat; i++) //i++ => i=enum Weekday (i+I)
        printf("%d\t", i);
    system("pause");
    return 0;
}
