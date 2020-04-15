/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-10 23:00:00
 * @LastEditTime: 2020-04-10 23:13:58
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\times12\times12_q03.c
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p0 = &arr[0], *p1 = &arr[0], *p2 = &arr[1];
    printf("%d\n", p2 - p1);
    printf("%d,%d\n", *(&arr[2]), arr[2]);
    printf("%d,%d,%d\n", *p0 + 2, *arr + 2, arr[2]);
    printf("%d,%d,%d,%d\n", *p0 + 2, *arr + 2, arr[2], p0[2]);
    system("pause");
    return 0;
}
