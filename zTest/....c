/** 
 * @Author : Lu7fer
 * @Date: 2020-04-29 19:37:39
 * @LastEditTime: 2020-04-29 19:37:40
 * @FilePath: \C-language-study-homework\zTest\....c
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
    int a[8] = {7, 6, 5, 4, 3, 2, 1, 0}, *p = &a[7];
    *(p - 1) += (*p += 1, *(p -= 6) += 3, *(p + 4) += 1);

    return 0;
}
