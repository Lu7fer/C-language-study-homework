
#include <stdio.h>
#include <stdlib.h>

int min(int, int, int);

int main(int argc, char const *argv[])
{
    int var_a = 20, var_b = 17, var_c = 36;
    printf("最小的数是:%d\n", min(var_a, var_b, var_c));
    system("pause");
    return 0;
}

int min(int var_a, int var_b, int var_c)
{
    int min = var_a;
    min = (var_b < min) ? var_b : min;
    min = (var_c < min) ? var_c : min;
    return min;
}