

#include <stdlib.h>
#include <stdio.h>

extern void input_and_print();
int number=0;

int main(int argc, char const *argv[])
{
    input_and_print();
    printf("get a number:%d",number);
    system("pause");
    return 0;
}
