/** 
 * @Author : Lu7fer
 * @Date: 2020-05-10 17:07:06
 * @LastEditTime: 2020-05-10 17:12:59
 * @FilePath: \C-language-study-homework\week10\times20\times20_q01.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright:All rights  :Teacher
 */
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int num;
    char name[20];
    char gender;
    float score;
};

int main(int argc, char const *argv[])
{
    struct student stu_1 = {1001, "Jack", 'M', 500.5};
    float *pscore = &stu_1.score;
    printf("%.1f\n", stu_1.score);
    printf("%.1f\n", *pscore);
    char *pname = stu_1.name;
    printf("%s\n", stu_1.name);
    printf("%s\n", pname);

    struct student *p = &stu_1; //struct student
    printf("%d\n", stu_1.num);
    printf("%s\n", stu_1.name);
    printf("%c\n", stu_1.gender);
    printf("%.1f\n", stu_1.score);

    printf("%d\n", (*p).num);
    printf("%s\n", (*p).name);
    printf("%c\n", (*p).gender);
    printf("%.1f\n", (*p).score);

    system("pause");
    return 0;
}
