/*
 * @author: 2019407229_程曾
 * @LastEditTime: 2020-03-05 12:30:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void print(char);
int is_blank(char);
int main()

{
    int i, j;
    char c;
    char const *string[7];
    string[0] = "你站在桥上看风景，";
    string[1] = "\n";
    string[2] = "  看风景的人在楼上看你。";
    string[3] = "\n";
    string[4] = "    明月装饰了你的窗子，";
    string[5] = "\n";
    string[6] = "      你装饰了别人的梦......";
    // string[7] = "\n";
    Sleep(2000);
    while (1)
    {
        for (i = 0; i < 7; i++)
        {
            for (j = 0; c = string[i][j]; j++)
            {
                if (is_blank(c))
                {
                    print(c);
                    continue;
                }
                print(c);
                Sleep(70);
            }
            Sleep(1000);
            for (; j > 0; j--)
            {
                printf("\b \b");
                Sleep(50);
            }
        }
        system("cls");
        Sleep(1000);
    }

    return 0;
}

void print(char c)
{
    printf("%c", c);
}

int is_blank(char c)
{
    if (c == ' ' || c == '\n')
        return 1;
    return 0;
}