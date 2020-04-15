/*
 * @author: 2019407229_程曾
 * @LastEditTime: 2020-03-05 11:32:48
 */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void println_7();
void println_5();
void println_3();
void println_1();
int main(int argc, char const *argv[])
{
    println_7();
    Sleep(1000);
    println_5();
    Sleep(1000);
    println_3();
    Sleep(1000);
    println_1();
    Sleep(1000);
    system("pause");
    return 0;
}

void println_7()
{
    printf("*******\n");
}
void println_5()
{
    printf("       *****\n");
}
void println_3()
{
    printf("            ***\n");
}
void println_1()
{
    printf("                *\n");
}