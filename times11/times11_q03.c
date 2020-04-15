/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-09 21:21:20
 * @LastEditTime: 2020-04-10 20:35:04
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\times11\times11_q03.c
 */

#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("please enter two different numbers:\n");
    scanf("%d%d", &n1, &n2);
    printf("before swap: %d   %d\n", n1, n2);
    swap(&n1, &n2);
    printf("after swap: %d   %d\n", n1, n2);
    system("pause");
    return 0;
}
