/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-10 22:54:38
 * @LastEditTime: 2020-04-10 23:10:41
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\times12\times12_q02.c
 */

#include <stdio.h>
#include <stdlib.h>
void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
void exchange(int *p1, int *p2, int *p3)
{
    if (*p1 < *p2)
        swap(p1, p2);
    if (*p1 < *p3)
        swap(p1, p3);
    if (*p2 < *p3)
        swap(p2, p3);
}

int main(int argc, char const *argv[])
{
    int *ptr1, *ptr2, *ptr3, n1, n2, n3;
    printf("please enter three different numbers:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("order is %d  %d  %d \n", *ptr1, *ptr2, *ptr3);
    system("pause");
    return 0;
}
