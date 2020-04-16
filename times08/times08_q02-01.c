


/* times08_q02-01.c */
#include <stdlib.h>
#include <stdio.h>
// #include "times08_q02-02.c"
int A = 1;
extern int func(int i);
int main(int argc, char const *argv[])
{
    printf("origin A=%d\n",A);
    func(3);
    printf("then A=%d\n",A);
    system("pause");
    return 0;
}
