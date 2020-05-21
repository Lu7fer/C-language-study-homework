/** 
 * @Author : Lu7fer
 * @Date: 2020-05-21 22:17:31
 * @LastEditTime: 2020-05-21 22:28:55
 * @FilePath: \C-language-study-homework\week12\times24\times24_q01.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch, filename[50];
    printf("请输入所用的文件名: ");
    scanf("%s", filename);
    getchar();
    if ((fp = fopen(filename, "w")) == NULL)
    {
        printf("无法打开此文件\n"); //如果打开时出错，就输出"打不开"的信息
        exit(0);                    //终止程序*/
    }
    printf("请输入-一个准备存储到磁盘的字符串(以#结束): ");
    ch = getchar(); //接收从键盘输入的第-个字符
    while (ch != '#')
    {
        fputc(ch, fp);  //向磁盘文件输出-一个字符
        putchar(ch);    //将输出的字符显示在屏幕上
        ch = getchar(); //再接收从键盘输入的-个字符
    }
    fclose(fp);    //关闭文件
    putchar('\n'); 
    system("pause");
    return 0;
}
