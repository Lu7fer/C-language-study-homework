/** 
 * @Author : Lu7fer
 * @Date: 2020-03-28 17:55:36
 * @LastEditTime: 2020-04-16 09:52:05
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times08\times08_q03-01.c
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
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
