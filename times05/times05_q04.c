

#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main(int argc, char const *argv[])
{
    printf("%d\n", f(5));
    system("pause");
    return 0;
}

int f(int n)
{
    if (n < 1)
        return 0;
    if (n % 2)
        return n + f(n - 1);
    else
        return f(n - 1);
}