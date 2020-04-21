/** 
 * @Author : Lu7fer
 * @Date: 2020-03-27 19:40:08
 * @LastEditTime: 2020-04-16 09:52:27
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times07\times07_q01.c
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

float average(int, float *);
float max(int, float *);
float min(int, float *);

int main(int argc, char const *argv[])
{
	float score[4];
	int i;
	printf("Please enter 4 scores!\n");
	for (i = 0; i < 4; i++)
		scanf("%f", score + i);
	printf("max=%.2f,min=%.2f,average=%.2f\n", max(4, score), min(4, score), average(4, score));
	system("pause");
	return 0;
}

float average(int count, float arr[])
{
	float sum = arr[0];
	int i;
	for (i = 1; i < count; i++)
		sum += arr[i];
	return sum / count;
}

float min(int count, float arr[])
{
	float min = arr[0];
	int i;
	for (i = 1; i < count; i++)
		min = (min > arr[i]) ? arr[i] : min;
	return min;
}
float max(int count, float arr[])
{
	float max = arr[0];
	int i;
	for (i = 1; i < count; i++)
		max = (max > arr[i]) ? max : arr[i];
	return max;
}