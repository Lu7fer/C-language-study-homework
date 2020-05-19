/** 
 * @Author : Lu7fer
 * @Date: 2020-05-19 12:06:22
 * @LastEditTime: 2020-05-19 12:06:23
 * @FilePath: \C-language-study-homework\week12\times23\times23_q02.c
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
struct student
{
    int num;
    char name[20];
    int score[3];
};
void input(struct student *students)
{
    int i;
    puts("请输入学生信息:\n学号  姓名    成绩  成绩  成绩");
    for (i = 0; i < 5; i++)
    {
        scanf("%d%s%d%d%d", &(students->num), students->name, students->score, (students->score) + 1, (students->score) + 2);
        students++;
    }
}

void print(struct student *students)
{
    int i;
    puts("\n学号  姓名    成绩  成绩  成绩");
    for (i = 0; i < 5; i++)
    {
        printf("%-4d  %-6s  %-4d  %-4d  %-2d\n", students->num, students->name, students->score[0], students->score[1], students->score[2]);
        students++;
    }
}
int main(int argc, char const *argv[])
{
    struct student students[5];
    input(students);
    print(students);
    system("pause");
    return 0;
}
