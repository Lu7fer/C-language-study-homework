/** 
 * @Author : Lu7fer
 * @Date: 2020-03-12 18:51:44
 * @LastEditTime: 2020-04-16 09:55:06
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times04\times04_q03.c
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