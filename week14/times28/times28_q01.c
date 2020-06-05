/** 
 * @Author : Lu7fer
 * @Date: 2020-06-05 15:53:52
 * @LastEditTime: 2020-06-05 15:53:53
 * @FilePath: \C-language-study-homework\week14\times28\times28_q01.c
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
#define SIZE 3
//进行异常处理的fopen宏
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

struct student_t
{
    char name[12];
    int num;
    int age;
    char addr[40];
};
typedef struct student_t student_t;

student_t *load(char *bytes)
{
    openwith(src, "week14\\times28\\stu.dat", "rb", {
        fread(bytes, 60, 3, src);
    })
    return (student_t *)bytes;
}

void save(student_t *stus)
{
    openwith(dest, "week14\\times28\\stu.dat", "wb", {
        fwrite((char *)stus, 60, 3, dest);
    })
}
int main(int argc, char const *argv[])
{
    // student_t stud[SIZE] = {
    //     {"zhangsan", 2001, 18, "LA Ca."},
    //     {"lizsi", 2002, 19, "Tokyo"},
    //     {"miner", 2003, 18., "Dallas Tx. U.S."}};
    char stud_bytes[60 * 3];
    student_t *stus;
    stus = load(stud_bytes);
    int i;
    for (i = 0; i < SIZE; i++)
    {
        stus[i].age++;
    }
    save(stus);
    system("pause");
    return 0;
}
