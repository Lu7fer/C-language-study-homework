/** 
 * @Author : Lu7fer
 * @Date: 2020-03-27 23:56:51
 * @LastEditTime: 2020-04-16 09:52:18
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times08\times08_q01.c
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

