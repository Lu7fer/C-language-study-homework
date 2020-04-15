/** 
 * @ *Author : Lucifer_程曾
 * @Date: 2020-03-28 17:55:36
 * @LastEditTime: 2020-03-28 18:07:15
 * @Description: Programmed by Lucifer
 */

#include <stdlib.h>
#include <stdio.h>

extern void input_and_print();
int number=0;

int main(int argc, char const *argv[])
{
    input_and_print();
    printf("get a number:%d",number);
    system("pause");
    return 0;
}
