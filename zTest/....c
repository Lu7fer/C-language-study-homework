/** 
 * @Author : Lu7fer
 * @Date: 2020-04-29 19:37:39
 * @LastEditTime: 2020-04-29 19:37:40
 * @FilePath: \C-language-study-homework\zTest\....c
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

struct student
{
    int num;       //学号
    char name[20]; //姓名
    char gender;   //3门课成绩
    int age;       //平均成绩
};
int main(int argc, char const *argv[])
{
    unsigned char c[32];
    int *num = (int *)c, *age = (int *)(c + 25);
    char *name = (c + 4);
    char *gender = (c + 24);
    *num = 15;
    strcpy(name, "1234567890123456789");
    *gender = 'm';
    *age = 0xFFFFFFFF;
    struct student *stu;
    stu = (struct student *)c;
    system("pause");
    return 0;
}
