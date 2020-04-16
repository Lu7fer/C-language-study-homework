

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