/** 
 * @Author : Lu7fer
 * @Date: 2020-04-23 14:02:10
 * @LastEditTime: 2020-04-23 14:30:58
 * @FilePath: \C-language-study-homework\week08\times16\times16_q02.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software:
    you can redistribute it and/or modify it under the terms of 
the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License 
along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("地址:%p  ", argv[i]);
        printf("值:%s\n", argv[i]);
    }
    system("pause");
    return 0;
}
