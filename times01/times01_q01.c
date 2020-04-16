/** 
 * @Author : Lu7fer
 * @Date: 2020-03-01 23:09:28
 * @LastEditTime: 2020-04-16 09:56:45
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times01\times01_q01.c
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
	// float a, b, c, d;
	// float min=a;
	// if (min > b)
	//     min = b;
	// if (min > c)
	//     min = c;
	// if (min > d)
	//     min = d;
	// printf("最小的数字是:%f\n", min);

	float arr[4];
	printf("请输入4个小数:\n");
	scanf("%f,%f,%f,%f", &arr[0], &arr[1], &arr[2], &arr[3]);
	float min = arr[0];

	int i;
	for (i = 1; i < 4; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	printf("最小的数字是:%f\n", min);
	system("pause");
	return 0;
}
