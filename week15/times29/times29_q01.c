/** 
 * @Author : Lu7fer
 * @Date: 2020-06-09 12:18:24
 * @LastEditTime: 2020-06-09 12:18:52
 * @FilePath: \C-language-study-homework\week15\times29\times29_q01.c
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

//进行逻辑和异常处理的fopen宏,
#define openwith(X, Y, Z, A)           \
    FILE *X;                           \
    if ((X = fopen(Y, Z)))             \
    {                                  \
        A                              \
            fclose(X);                 \
    }                                  \
    else                               \
    {                                  \
        printf("%s can't open!\n", Y); \
        system("pause");               \
        exit(1);                       \
    }

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

//写一个程序将磁盘文件“stu.dat”中的6条学生信息记录
//中的2、4、6条记录读入内存并打印输出
int main(int argc, char const *argv[])
{
    // student_t stus[6] = {
    //     {"zhangsan", 1, 18, "LA CA."},
    //     {"lizsi", 2, 19, "Tokyo JP."},
    //     {"miner", 3, 18., "Dallas Tx. US."},
    //     {"Gabrial", 4, 18, "Beijin China"},
    //     {"Michael", 5, 17, "Chicago US."},
    //     {"miner", 6, 18., "Chengdu China"}};
    student_t stus[3];
    int i;
    openwith(
        src, "week15\\times29\\stu.dat", "r",
        for (i = 0; i < 3; i++) {
            fseek(src, sizeof(student_t), SEEK_CUR);
            fread(&stus[i], sizeof(student_t), 1, src);
        });
    for (i = 0; i < 3; i++)
    {
        print(stus+i);
    }

    system("pause");
    return 0;
}
