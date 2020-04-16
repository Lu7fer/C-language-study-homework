
#include <stdio.h>
#include <stdlib.h>

float max_with_3nums(float n1, float n2, float n3);
float max_with_2nums(float n1, float n2);

int main(int argc, char const *argv[])
{
    float num1, num2, num3;
    printf("请输入3个数,使用空格分隔\n");
    scanf("%f%f%f", &num1, &num2, &num3);
    printf("最大数为:%f\n", max_with_3nums(num1, num2, num3));
    system("pause");
    return 0;
}

float max_with_3nums(float n1, float n2, float n3)
{
    return (max_with_2nums(n1, n2) > n3) ? max_with_2nums(n1, n2) : n3;
}

float max_with_2nums(float n1, float n2)
{
    return (n1 > n2) ? n1 : n2;
}
