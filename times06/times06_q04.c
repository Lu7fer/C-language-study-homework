/*
 * @Author: 2019407229_程曾
 * @Date: 2020-03-19 18:53:09
 * @LastEditTime: 2020-03-19 20:16:56
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