/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-14 18:46:03
 * @LastEditTime: 2020-04-14 19:17:00
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\times13\times13_q01.c
 */

#include <stdio.h>
#include <stdlib.h>

void sub(int count, int *arr);
void print_arr(int count, int *arr);

int main(int argc, char const *argv[])
{
    int arr[5] = {44, 55, 66, 77, 88};
    printf("before:\n");
    print_arr(5, arr);
    sub(5, arr);
    printf("after:\n");
    print_arr(5, arr);
    system("pause");
    return 0;
}

void print_arr(int count, int *arr)
{
    int i;
    for (i = 0; i < count; i++)
        printf("%-4d", *(arr + i));
    putchar('\n');
}

void sub(int count, int *arr)
{
    int i;
    for (i = 0; i < count; i++)
        *(arr + i) -= 5;
}
