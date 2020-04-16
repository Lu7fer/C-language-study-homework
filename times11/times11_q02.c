
#include <stdio.h>
#include <stdlib.h>

void swap(int n1, int n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("please enter two different numbers:\n");
    scanf("%d%d", &n1, &n2);
    printf("before swap: %d   %d\n", n1, n2);
    swap(n1, n2);
    printf("after swap: %d   %d\n", n1, n2);
    system("pause");
    return 0;
}
