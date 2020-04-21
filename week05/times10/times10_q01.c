/** 
 * @Author : Lu7fer
 * @Date: 2020-04-02 11:10:38
 * @LastEditTime: 2020-04-16 09:51:26
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times10\times10_q01.c
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

int main(int argc, char const *argv[])
{
    /* viriable define and assignment*/
    int i = 10;
    char c = 'a';
    float f = 3.14;
    int arr[] = {1, 2, 3};
    int *ptr=&i;
    /* pointer assignment*/
    int *ptr_i = &i;
    char *ptr_c = &c;
    float *ptr_f = &f;
    int *ptr_arr = arr;
    int **ptr_ptr = &ptr;
    /* access*/
    printf("int:\ndirectly access:%d\n", i);
    printf("pointer access:%d\n", *ptr_i);
    printf("char:\ndirectly access:%c\n", c);
    printf("pointer access:%c\n", *ptr_c);
    printf("float:\ndirectly access:%f\n", f);
    printf("pointer access:%f\n", *ptr_f);
    printf("int array:\ndirectly access:%d\n", arr[1]);
    printf("pointer access:%d\n", *(ptr_arr + 1));
    printf("double pointer:\ndirectly access:%d\n", i);
    printf("pointer access:%dor%d\n", **ptr_ptr,*ptr);
    printf("%d,%d,%d",arr,&(arr[0]),ptr);
    return 0;
}
