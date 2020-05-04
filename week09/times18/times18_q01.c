/** 
 * @Author : Lu7fer
 * @Date: 2020-04-30 16:57:44
 * @LastEditTime: 2020-04-30 16:57:44
 * @FilePath: \C-language-study-homework\week09\times18\times18_q01.c
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

int main(int argc, char const *argv[])
{
    //第一种
    struct student
    {
        char name[10];
        int id;
        int height;
        char address[100];
    } s = {"zhangsan", 9527, 180, "本星系团银河系第三旋臂猎户座太阳系"};
    //第二种
    struct student s2;
    strcpy(s2.name, "lisi");
    s2.id = 9529;
    s2.height = 176;
    strcpy(s2.address, "本星系团银河系第三旋臂猎户座半人马a");
    //键盘,指针
    struct student kbd, *kbd_ptr;
    kbd_ptr = &kbd;
    printf("请输入 name\n");
    scanf("%s", kbd_ptr->name);
    printf("请输入id\n");
    scanf("%d", &(kbd_ptr->id));
    printf("请输入height\n");
    scanf("%d", &(kbd_ptr->height));
    printf("请输入address\n");
    scanf("%s", kbd_ptr->address);
    system("pause");
    return 0;
}
