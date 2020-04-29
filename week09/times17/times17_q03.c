/** 
 * @Author : Lu7fer
 * @Date: 2020-04-29 11:07:09
 * @LastEditTime: 2020-04-29 11:07:10
 * @FilePath: \C-language-study-homework\week09\times17\times17_q03.c
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
//#include <string.h>

int strcmp(char *p1, char *p2);

int main(int argc, char const *argv[])
{
    char s1[] = "BOY";
    char s2[] = "BAD";
    char s3[] = "BOYO";
    printf("%s-%s=%d,%s-%s=%d\n", s1, s2, strcmp(s1, s2),
           s1, s3, strcmp(s1, s3));
    system("pause");
    return 0;
}

/**
 * str1 - str2 ,如果结果为负,则str1 < str2,结果为正,则str1 > str2 ,
 *  结果为0 ,则str1 == str2 
 */
int strcmp(char *p1, char *p2)
{
    //比较次数由最短的字符串决定
    int i;
    //compare_len = (strlen(p1) < strlen(p2)) ? strlen(p1) : strlen(p2);
    for (i = 0; *(p1 + i) && *(p2 + i); i++)
    {
        if (*(p1 + i) == *(p2 + i))
        {
            continue;
        }
        else
        {
            return *(p1 + i) - *(p2 + i);
        }
    }
    return *(p1 + i) - *(p2 + i);
}