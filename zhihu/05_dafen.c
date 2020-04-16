/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-11 08:47:03
 * @LastEditTime: 2020-04-11 09:09:14
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\zhihu\05_dafen.c
 */

#include <stdio.h>
int main()
{
    int i, j, n;
    //可输入的分数上限和下限由min与max决定,不然有bug
    double sum, ave[10], x[5], tmp, max, min;
    printf("校园歌手大赛计分系统\n");
    for (n = 0; n < 10; n++)
    {
        max = 0.0, min = 100.0,sum = 0.0;
        printf("请输入评委的分数\n");
        for (i = 0; i <= 4; i++)
        {
            scanf("%lf", &x[i]);
            sum += x[i];
            max = (max < x[i]) ? x[i] : max;
            min = (min > x[i]) ? x[i] : min;
        }
        ave[n] = (sum - max - min) / 3.0;
        printf("该选手的平均分%3.2lf\n", ave[n]);
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