

#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main(int argc, char const *argv[])
{
    printf("%d\n", f(4));
    system("pause");
    return 0;
}

int f(int n)
{
    if (n == 1)
        return 1;
    return n * f(n - 1);
}
