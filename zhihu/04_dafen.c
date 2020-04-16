/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-04-11 08:43:19
 * @LastEditTime: 2020-04-11 09:07:36
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\zhihu\04_dafen.c
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
