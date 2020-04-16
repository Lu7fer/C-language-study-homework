/** 
 * @Author : Lu7fer
 * @Date: 2020-04-11 08:43:19
 * @LastEditTime: 2020-04-16 09:57:44
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\zhihu\04_dafen.c
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
int main(int argc, char const *argv[])
{
    printf("计分系统\n请输入评委分数:\n");
    int i, j;
    double total_score = 0, score[10], tmp,max=0,min=0;
    
    for (i = 0; i < 10; i++)
    {
        scanf("%lf", &score[i]);
        total_score += score[i];
        max=(max<score[i])?score[i]:max;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 1; j < 10 - i; j++)
        {
            if (score[j - 1] < score[j])
            {
                tmp = score[j];
                score[j] = score[j - 1];
                score[j - 1] = tmp;
            }
        }
    }
    printf("分数从高到低为:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%3.1lf   ", score[i]);
    }
    total_score -= (score[0] + score[9]);
    printf("\n去掉一个最高分,去掉一个最低分,最后结果:%3.2lf\n", total_score / 8);
    system("pause");
    return 0;
}
