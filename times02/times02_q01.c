
#include <stdio.h>
#include <stdlib.h>

void println_sharp()
{
    printf("##############\n");
}
void println_star()
{
    printf("********************\n");
}
void println_coming()
{
    printf("函数，我来了！\n");
}
void println_conquer()
{
    printf("函数，我要征服你！\n");
}
int main(int argc, char const *argv[])
{
    println_sharp();
    println_coming();
    println_star();
    println_conquer();
    println_sharp();
    system("pause");
    return 0;
}
