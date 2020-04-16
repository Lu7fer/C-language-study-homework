

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