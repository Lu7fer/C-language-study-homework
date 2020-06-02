/** 
 * @Author : Lu7fer
 * @Date: 2020-06-02 12:12:17
 * @LastEditTime: 2020-06-02 12:12:18
 * @FilePath: \C-language-study-homework\week14\times27\times27_q01.c
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

//进行异常处理的fopen宏
#define FILEOPEN(X, Y, Z)              \
    FILE *X;                           \
    if (!(X = fopen(Y, Z)))            \
    {                                  \
        printf("%s can't open!\n", Y); \
        system("pause");               \
        exit(1);                       \
    }

//重写strcmp以支持降序排序
int overweite_strcmp(const void *s1, const void *s2)
{
    return -strcmp(s1, s2);
}

int main(int argc, char const *argv[])
{
    FILEOPEN(src, "week14\\times27\\ss.dat", "r")
    FILEOPEN(dest, "week14\\times27\\dd.dat", "w")
    char strings[3][10];
    size_t i;
    puts("原始字符串:\n");
    for (i = 0; i < 3; i++)
    {
        fgets(strings[i], 10, src);
        puts(strings[i]);
    }
    //stdlib qsort排序
    qsort(strings, 3, 10, overweite_strcmp);
    puts("排序后:\n");
    for (i = 0; i < 3; i++)
    {
        fprintf(dest, "%s\n", strings[i]);
        printf("%s\n", strings[i]);
    }
    fclose(dest);
    fclose(src);
    system("pause");
    return 0;
}
