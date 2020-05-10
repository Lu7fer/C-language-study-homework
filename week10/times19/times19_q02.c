/** 
 * @Author : Lu7fer
 * @Date: 2020-05-07 10:54:38
 * @LastEditTime: 2020-05-07 10:54:38
 * @FilePath: \C-language-study-homework\week10\times19\times19_q02.c
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
    int score;
};
/**
 * 将形参中小的排在前
*/
void arrange(struct student *s1, struct student *s2)
{
    struct student tmp;
    if((s1->score) > (s2->score))
    {
        tmp=*s1;
        *s1=*s2;
        *s2=tmp;
    }
}

int main(int argc, char const *argv[])
{
    struct student tmp, stus[4] = {
                            {1001, "zhangsan", 85},
                            {1002, "lisi", 72},
                            {1003, "wangwu", 91},
                            {1004, "liuliu", 84}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < 4 - i; j++)
        {
            arrange((stus+j-1),(stus+j));
        }
    }

    for ( i = 0; i < 4; i++)
    {
        printf("%s的成绩是%d:\n",stus[i].name,stus[i].score);
    }
    
    system("pause");
    return 0;
}
