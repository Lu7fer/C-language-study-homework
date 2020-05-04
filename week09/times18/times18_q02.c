/** 
 * @Author : Lu7fer
 * @Date: 2020-04-30 18:34:32
 * @LastEditTime: 2020-04-30 18:34:32
 * @FilePath: \C-language-study-homework\week09\times18\times18_q02.c
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
    struct student
    {
        char name[10];
        int id;
        int height;
        char address[100];
    } * s_ptr;
    //创建一个120字节的数组
    unsigned char mem[120];
    //姓名字符串
    strcpy(mem, "zhangsan");
    //内存4字节为一段,这里数据类型不同,使用下一内存分段.int跑到第11+2=13字节去了
    //用指针进行赋值
    *(int *)(mem + 12) = 9527;
    *(int *)(mem + 16) = 180;
    //复制字符串到第21字节,这里是address的开始字节
    strcpy(mem + 20, "abcdefghijkl");
    //将mem赋给结构体指针
    s_ptr = (struct student *)mem;
    //输出查看
    printf("name=%s\n",s_ptr->name);
    printf("id=%d\n", s_ptr->id);
    printf("height=%d\n", s_ptr->height);
    printf("address=%s\n", s_ptr->address);
    system("pause");
    return 0;
}
