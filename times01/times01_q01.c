

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
