/** 
 * @Author : Lu7fer
 * @Date: 2020-05-10 18:39:25
 * @LastEditTime: 2020-05-10 18:39:26
 * @FilePath: \C-language-study-homework\week10\times20\times20_q02-2.c
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

struct Student
{
    int num;char name[20];char sex;int age;
};
int main(int argc, char const *argv[])
{
    struct Student stu[3] = {{10101, "Li Lin", 'M', 18},
                         {10102, " Zhang Fang", 'M', 19},
                         {10104., "Wang Min", 'F', 20}};
    struct Student *p;
    printf(" No. Name  sex age\n");
    for (p = stu; p < stu + 3; p++)
        print("%5d %- 20s 9%2c %4d\n", p->num, p->name, p->sex, p->age);
    system("pause");
    return 0;
}
