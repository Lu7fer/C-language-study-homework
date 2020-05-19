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

struct
{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int clas;
        char position[10];
    } category;
} person[2];
int main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("please enter the date or person\n");
        scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);
        if (person[i].job == 's')
            scanf("%d", &person[i].category.clas);
        else if (person[i].job == 't')
            scanf("%s", person[i].category.position);
        else
            printf("请重新输入");
    }
    printf("\n");
    printf("NO.  name job class/position\n");
    for (i = 0; i < 2; i++)
    {
        if (person[i].job == 's')
            printf("%-6d %-10s %-4c %-4c%-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.clas);
        else
            printf("%-6d %-10s %-4c %-4c%-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
    }
    system("pause");
    return 0;
}
