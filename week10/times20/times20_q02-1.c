/** 
 * @Author : Lu7fer
 * @Date: 2020-05-10 17:24:04
 * @LastEditTime: 2020-05-10 17:24:05
 * @FilePath: \C-language-study-homework\week10\times20\times20_q02.c
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
//学生数为3
#define N 3
//建立结构体类型struct student
struct student
{
    int num;        //学号
    char name[20];  //姓名
    float score[3]; //3门课成绩
    float aver;     //平均成绩
};
void input(struct student stu[]);
struct student max(struct student stu[]);
void print_student(struct student *stu); // 函数声明
int main(int argc, char const *argv[])
{

    void print(struct student stu);
    struct student stu[N], *p = stu;
    input(p);
    print(max(p));
    system("pause");
    return 0;
}

void input(struct student stu[])
{
    int i;
    printf("请输入各学生的信息:学号、姓名、三门课成绩:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d%s%f%f%f", &stu[i].num, stu[i].name,
              &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}
struct student max(struct student stu[])
{
    int i, m = 0;
    for (i = 0; i < N; i++)
        if (stu[i].aver > stu[m].aver)
            m = i;
    return stu[m];
}

void print_student(struct student *stu)
{
    printf("\n成绩最高的学生是:\n");
    printf("学号:%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1fn平均成绩:%6.2f\n",
           stu->num, stu->name, stu->score[0], stu->score[1], stu->score[2], stu->aver);
}