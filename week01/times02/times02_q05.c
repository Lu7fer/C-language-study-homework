/** 
 * @Author : Lu7fer
 * @Date: 2020-03-05 11:38:25
 * @LastEditTime: 2020-04-16 09:56:03
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\times02\times02_q05.c
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
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