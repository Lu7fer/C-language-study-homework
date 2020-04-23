/** 
 * @Author : Lu7fer
 * @Date: 2020-04-23 10:10:22
 * @LastEditTime: 2020-04-23 14:30:52
 * @FilePath: \C-language-study-homework\week08\times16\times16_q01.c
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
#include <string.h>

void str_sort(char **str_ptr, unsigned int size, int (*comparator)(const char *, const char *));
int comparator(const char *str1, const char *str2);

int main(int argc, char const *argv[])
{
    int i;
    char strs[5][51];
    char *str_ptr[5];
    printf("请输入一些字符串,并且长度小于50\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &strs[i][0]);
        getchar();
        str_ptr[i] = &strs[i][0];
    }
    //字符串排序
    printf("sort!从小到大\n");
    str_sort(str_ptr, 5, comparator);
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", *(str_ptr + i));
    }
    system("pause");
    return 0;
}

void str_sort(char *str_ptr[], unsigned int size, int (*comparator)(const char *, const char *))
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size - i; j++)
        {
            if (comparator(str_ptr[j - 1], str_ptr[j]) > 0)
            {
                char *tmp_pptr;
                tmp_pptr = str_ptr[j - 1];
                str_ptr[j - 1] = str_ptr[j];
                str_ptr[j] = tmp_pptr;
            }
        }
    }
}

/**
 * str1 - str2 ,如果结果为负,则str1 < str2,结果为正,则str1 > str2 ,
 *  结果为0 ,则str1 == str2 
 */
int comparator(const char *str1, const char *str2)
{
    //比较次数由最短的字符串决定
    int i, compare_len;
    compare_len = (strlen(str1) < strlen(str2)) ? strlen(str1) : strlen(str2);
    for (i = 0; i < compare_len; i++)
    {
        if (*(str1 + i) == *(str2 + i))
        {
            continue;
        }
        else
        {
            return *(str1 + i) - *(str2 + i);
        }
    }
    return strlen(str1) - strlen(str2);
}