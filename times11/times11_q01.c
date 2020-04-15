/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-09 20:31:04
 * @LastEditTime: 2020-04-09 21:25:47
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\times11\times11_q01.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *maxptr, *minptr, *tmpptr, n1, n2;
    printf("please enter two different numbers:\n");
    scanf("%d%d", &n1, &n2);
    maxptr = &n1;
    minptr = &n2;
    if (n1 < n2)
    {
        tmpptr = maxptr;
        maxptr = minptr;
        minptr = tmpptr;
    }
    printf("max is %d,min is %d", *maxptr, *minptr);
    system("pause");
    return 0;
}
