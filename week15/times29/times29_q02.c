/** 
 * @Author : Lu7fer
 * @Date: 2020-06-09 13:09:59
 * @LastEditTime: 2020-06-09 13:09:59
 * @FilePath: \C-language-study-homework\week15\times29\times29_q02.c
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
    char name[12];
    int num;
    int age;
    char addr[20];
};
typedef struct student student_t;

void print(student_t *stu)
{
    printf("name:%s,\tnum:%d,\tage:%d,\taddress:%s\n",
           stu->name, stu->num, stu->age, stu->addr);
}

// student_t stus[6] = {
//     {"zhangsan", 1, 18, "LA CA."},
//     {"lizsi", 2, 19, "Tokyo JP."},
//     {"miner", 3, 18., "Dallas Tx. US."},
//     {"Gabrial", 4, 18, "Beijin China"},
//     {"Michael", 5, 17, "Chicago US."},
//     {"miner", 6, 18., "Chengdu China"}};

//根据用户查询时输入的记录编号将磁盘中文件中对应编号记录读入内存并输出。
int main(int argc, char const *argv[])
{
    FILE *src;
    student_t stu;
    if (src = fopen("week15/times29/stu.dat", "r"))
    {
        int i = 0;
        do
        {
            printf("请输入相应编号(输入0退出):\n");
            scanf("%d", &i);
            if (i != 0)
            {
                fseek(src, (i - 1) * sizeof(student_t), SEEK_SET);
                fread(&stu, sizeof(student_t), 1, src);
                print(&stu);
            }

        } while (i);

        fclose(src);
    }
    else
    {
        printf("file not exist or permission denied!\n");
        system("pause");
        exit(-1);
    }
    system("pause");
    return 0;
}
