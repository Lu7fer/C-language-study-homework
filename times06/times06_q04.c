/** 
 * @Author : Lu7fer
 * @Date: 2020-03-19 18:51:11
 * @LastEditTime: 2020-04-16 09:52:32
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times06\times06_q04.c
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
#include <time.h>

void add(int row, int col, int (*arr)[]);
void print_array(int row, int col, int (*arr)[]);

int main(int argc, char const *argv[])
{
    int arr[4][5];
    int i, j;
    srand((unsigned int)time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % 501;
        }
    }
    print_array(4, 5, arr);
    add(4, 5, arr);
    printf("数组改变\n");
    print_array(4, 5, arr);
    system("pause");
    return 0;
}

void add(int row, int col, int arr[][5])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[i][j] += 5;
        }
    }
}

void print_array(int row, int col, int arr[][5])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

// void print_array(int row,int col,int *a){
//     for (size_t i = 0; i < row*col; i++)
//     {
//         printf("%5d",*(a+i));
//     }

// }