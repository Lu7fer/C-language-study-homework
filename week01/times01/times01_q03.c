/** 
 * @Author : Lu7fer
 * @Date: 2020-03-01 23:44:23
 * @LastEditTime: 2020-04-16 09:56:24
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times01\times01_q03.c
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

#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "math.h"

int sort(int, float *arr);
void swap(float *a, float *b);
void arr_println(int, float *);

int main(int argc, char const *argv[])
{
	float arr[10];
	int i;
	//随机数为数组赋值
	srand((unsigned int)time(NULL));
	for (i = 0; i < 10; i++)
	{
		//		   0-499的整数+小数
		arr[i] = (rand() % 500) + ((float)RAND_MAX / rand());
	} //赋值完成
	printf("数组:\n");
	arr_println(10, arr);
	//排序开始!
	sort(10, arr);
	printf("排序后:\n");
	arr_println(10, arr);
	system("pause");
	return 0;
}

int sort(int count, float *arr)
{
	int i, j;
	for (i = 0; i < count; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
	return 0;
}

void swap(float *a, float *b)
{
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void arr_println(int count, float *arr)
{
	printf("\n[");
	int i;
	printf("%9.4f", arr[0]);
	for (i = 1; i < count; i++)
	{
		printf(",%9.4f", arr[i]);
	}
	printf("]\n");
}