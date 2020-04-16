
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char sharp = '#';
    char star = '*';
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("%c", sharp);
        for (j = 0; j < i + 1; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }

    printf("\n---------------\n");

    char dollar = '$';
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (j < 4 - (i + 1))
                printf("%c", sharp);
            else
                printf("%c", dollar);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
