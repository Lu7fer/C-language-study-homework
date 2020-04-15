/** 
 * @ *Author : Lucifer_程曾
 * @Date: 2020-03-27 23:56:51
 * @LastEditTime: 2020-03-28 16:11:56
 * @Description: Programmed by Lucifer
 */

#include <stdio.h>
#include <stdlib.h>

int f(int i){
    static int a=0;
    a+=i;
    return a;
}

int main(int argc, char const *argv[])
{
    int i;
    printf("%d",f(0));
    for ( i = 1; i <= 3; i++)
    {
        printf("+%d=%d",i,f(i));
    }
    system("pause");
    return 0;
}

