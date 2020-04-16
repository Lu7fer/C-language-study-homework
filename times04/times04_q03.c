

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void solve_delta_over_zero(float a, float b, float delta);
void solve_delta_equals_zero(float a, float b);
void solve_delta_under_zero();
void solve_linear_equation(float b, float c);

int main(int argc, char const *argv[])
{
    printf("计算二元一次方程:\n");
    printf("格式:\n aX^2 + bX + c = 0,请顺序输入a b c的值,空格分隔\n");
    float a = 0, b = 0, c = 0;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("二次项系数为0,这是一个一元一次方程\n");
        solve_linear_equation(b, c);
        system("pause");
        return 0;
    }
    float delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        solve_delta_over_zero(a, b, delta);
    }
    else if (delta == 0)
    {
        solve_delta_equals_zero(a, b);
    }
    else
    {
        solve_delta_under_zero();
    }

    system("pause");
    return 0;
}

void solve_delta_over_zero(float a, float b, float delta)
{
    printf("方程有两实根:X1=%f,X2=%f\n", (-b + sqrt(delta)) / a / 2, (-b - sqrt(delta)) / a / 2);
}

void solve_delta_equals_zero(float a, float b)
{
    printf("方程有一实根:X=%f\n", -b / a / 2);
}
void solve_delta_under_zero()
{
    printf("方程没有实根\n");
}

void solve_linear_equation(float b, float c)
{
    if (b == 0)
    {
        printf("输入有误!\n");
        return;
    }
    printf("方程的根X:=%f", -c / b);
}