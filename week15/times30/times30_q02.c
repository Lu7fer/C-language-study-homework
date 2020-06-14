/** 
 * @Author : Lu7fer
 * @Date: 2020-06-13 23:08:24
 * @LastEditTime: 2020-06-13 23:08:25
 * @FilePath: /C-language-study-homework/week15/times30/times30_q02.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 */
 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct Stu
{
    int num;
    char name[10];
    int score[3];
    float aver;
} s[SIZE];
int main()
{
    FILE *fp1;
    int i, j;
    if ((fp1 = fopen("week15\\times30\\stu.dat", "wb")) == NULL)
    {
        printf("cannot open infile\n");
        return 0;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("请输入共%d条学生数据,输入的数据分别为:学号，姓名，三门课的成绩");
        scanf("%d%s%d%d%d", &s[i].num,
              s[i].name, &s[i].score[0],
              &s[i].score[1], &s[i].score[2]);
        s[i].aver = (float)(s[i].score[0] + s[i].score[1] + s[i].score[2]) / 3.0;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("你输入的第%d条学生数据为: \n", i + 1);
        printf("学号: %d\t姓名: %s\t成绩为: %d %d %d\t平均分: %f\n", s[i].num, s);
    }
    for (i = 0; i < SIZE; i++)
        if (fwrite(&s[i], sizeof(struct Stu), 1, fp1) != 1)
            printf("file write error\n");
    fclose(fp1);
    return 0;
