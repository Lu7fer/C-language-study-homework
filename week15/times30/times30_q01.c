/** 
 * @Author : Lu7fer
 * @Date: 2020-06-11 09:38:11
 * @LastEditTime: 2020-06-11 09:45:58
 * @FilePath: /C-language-study-homework/week15/times30/times30_q01.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2, *fp3;
    int i, j;
    char str1[40], str2[20], str3[40];
    if ((fp1 = fopen("week15/times30/A. txt", "r")) == NULL)
    // 打开输入 文件stu_ list
    {
        printf("cannot open infile\n");
        return 0;
    }
    if ((fp2 = fopen("week15/times30/B. txt", "r")) == NULL)
    //打开输入文件stu_ list
    {
        printf("cannot open infile\n");
        return 0;
    }
    if ((fp3 = fopen("week15/times30/C. txt", "w")) == NULL)
    //打开输入文件stu_ list
    {
        printf("cannot open infile\n");
        return 0;
    }
    fgets(str1, 40, fp1);
    puts(str1);
    fgets(str2, 20, fp2);
    puts(str2);
    strcat(str1, str2);
    puts(str1);
    strcpy(str3, str1);
    puts(str3);
    int len = strlen(str3); //len=5
    int p;
    char temp;
    for (i = 0; i < len - 1; i++)
    {
        p = i;
        for (j = i + 1; j < len; j++)
            if (str3[j] < str3[p])
                p = j;
        if (p != i)
        {
            temp = str3[i];
            str3[i] = str3[p];
            str3[p] = temp;
        }
        puts(str3);
        fputs(str3, fp3);
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);

        system("pause");
        return 0;
    }
