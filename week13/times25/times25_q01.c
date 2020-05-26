/** 
 * @Author : Lu7fer
 * @Date: 2020-05-26 09:36:24
 * @LastEditTime: 2020-05-26 09:36:25
 * @FilePath: \C-language-study-homework\week13\times25\times25_q01.c
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

int main(int argc, char const *argv[])
{
    FILE *soruce;
    FILE *dest;
    char file_name[200];
    printf("soruce file name:\n");
    scanf("%s", file_name);
    getchar();
    //"D:\\DevelopmentWorkspace\\VisualStudioCode\\C-language-study-homework\\week13\\times25\\test.txt";
    if (!(soruce = fopen(file_name, "r")))
    {
        printf("源文件打开失败\n");
        exit(1);
    }
    printf("destnation file name:\n");
    scanf("%s", file_name);
    getchar();
    //"D:\\DevelopmentWorkspace\\VisualStudioCode\\C-language-study-homework\\week13\\times25\\testCopy.txt";
    if (!(dest = fopen(file_name, "w")))
    {
        printf("目标文件打开失败\n");
        exit(1);
    }
    //64KB缓冲区
    char tmp[64 * 1024];
    int read;
    while (read = fread(tmp, 1, 64 * 1024, soruce))
    {
        fwrite(tmp, 1, read, dest);
        printf("写入%d字节\n", read);
    }
    fclose(dest);
    fclose(soruce);
    system("pause");
    return 0;
}
