
#include <stdio.h>
#include <stdlib.h>
void find(int *maxptr, int *minptr, int n1, int n2)
{
    if (n1 > n2)
    {
        maxptr = &n1;
        minptr = &n2;
    }
    else
    {
        maxptr = &n2;
        minptr = &n1;
    }
}
int main(int argc, char const *argv[])
{
    int *maxptr, *minptr, n1, n2;
    printf("please enter two different numbers:\n");
    scanf("%d%d", &n1, &n2);
    find(maxptr, minptr, n1, n2);
    printf("max is %d,min is %d", *maxptr, *minptr);
    system("pause");
    return 0;
}
