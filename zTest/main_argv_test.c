
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;

    for(i=0;i<argc;i++){
        printf("%p\n",argv[i]);
        printf("%s\n",argv[i]);
    }
    system("pause");
    return 0;
}

