
#include "stdlib.h"
#include "stdio.h"

float input(int);
float min(int, float *);
float average(int, float *);

int main(int argc, char const *argv[])
{
    int i;
    float arr[5];
    printf("请输入5个小数\n");
    for (i = 0; i < 5; i++)
    {
        arr[i] = input(i + 1);
    }
    printf("最小的数是:%f\n", min(5, arr));
    printf("平均数是:%f\n", average(5, arr));
    system("pause");
    return 0;
}

float input(int i)
{
    float f;
    printf("请输入第%d个小数:\n", i);
    scanf("%f", &f);
    return f;
}

float min(int count, float *arr)
{
    float min;
    int i;
    for (i = 1, min = arr[0]; i < count; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

float average(int count, float *arr)
{
    float sum = 0;
    int i;
    for (i = 0; i < count; i++)
        sum += arr[i];
    return sum / count;
}