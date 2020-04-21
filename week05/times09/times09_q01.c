/** 
 * @Author : Lu7fer
 * @Date: 2020-03-31 14:04:21
 * @LastEditTime: 2020-04-16 09:51:56
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times09\times09_q01.c
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
#include <string.h>
/* 3X3二维数组行列互换*/
void exchange(int arr[][3])
{
    int i, j, temp;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j > i)
            {
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
}
/* 字符串反序*/
char *reverse(char *str)
{
    int i, index = strlen(str) - 1;
    char temp;
    for (i = 0; i <= index / 2; i++)
    {
        temp = str[i];
        str[i] = str[index - i];
        str[index - i] = temp;
    }
    return str;
}

/* 字符串拼接,把 src 所指向的字符串追加到 dest 所指向的字符串的结尾*/
char *strcat(char *dest, const char *src)
{
    int dest_len = strlen(dest);
    int i = 0;
    do
    {
        *(dest + dest_len + i) = *(src + i);
    } while (*(src + (i++)));
    return dest;
}

/* 统计字母数字空格其它字符个数*/
struct counter
{
    int letter;
    int number;
    int blank;
    int other;
} counter,*counter_ptr = &counter;

void count(struct counter *str_counter, char *str)
{
    str_counter->letter = 0;
    str_counter->number = 0;
    str_counter->blank = 0;
    str_counter->other = 0;
    int str_len = strlen(str);
    int i;
    for (i = 0; i < str_len; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z' || 'a' <= str[i] && str[i] <= 'z')
            str_counter->letter++;
        else if ('0' <= str[i] && str[i] <= '9')
            str_counter->number++;
        else if (str[i] == ' ')
            str_counter->blank++;
        else
            str_counter->other++;
    }
}
/* 测试*/
int main(int argc, char const *argv[])
{
    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* 123 456 789 */
    exchange(arr);
    /* 147 258 369 */
    int i;
    for (i = 0; i < 9; i++)
    {
        printf("%d ,", *((int *)arr + i));
    }

    char str[100];
    printf("\n输入一些字符:\n");
    reverse(gets(str));
    printf("反序输出:\n");
    printf("%s\n", str);
    char src[50];
    printf("再输入一些字符,输入的字符将会拼接在反序后的字符后面:\n");
    puts(strcat(str, gets(src)));
    printf("\n统计上面字符串的字符类别数量\n");
    count(counter_ptr, str);
    printf("共有%d个字母,%d个数字%d个空格,%d个其他字符\n", counter_ptr->letter, counter_ptr->number, counter_ptr->blank, counter_ptr->other);
    system("pause");
    return 0;
}
