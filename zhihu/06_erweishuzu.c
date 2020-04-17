/** 
 * @Author : Lu7fer
 * @Date: 2020-04-17 21:43:44
 * @LastEditTime: 2020-04-17 21:43:44
 * @FilePath: \C-language-study-homework\zhihu\06_erweishuzu.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright
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
int main()
{
    int i, j, n;
    //可输入的分数上限和下限由min与max决定,不然有bug
    double sum, ave[10], x[10][5], tmp, max, min;
    printf("校园歌手大赛计分系统\n");
    for (n = 0; n < 10; n++)
    {
        max = 0.0, min = 100.0, sum = 0.0;
        printf("请输入评委的分数\n");
        for (i = 0; i < 10; i++)
        {
            scanf("%lf", &x[n][i]);
            sum += x[n][i];
            max = (max < x[n][i]) ? x[n][i] : max;
            min = (min > x[n][i]) ? x[n][i] : min;

            ave[n] = (sum - max - min) / 3.0;
            printf("该选手的平均分%3.2lf\n", ave[n]);
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 1; j < 10 - i; j++)
        {
            if (ave[j - 1] < ave[j])
            {
                tmp = ave[j];
                ave[j] = ave[j - 1];
                ave[j - 1] = tmp;
            }
        }
    }
    printf("每位选手的得分:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%3.1lf  ", ave[i]);
    }
    system("pause");
    return 0;
}