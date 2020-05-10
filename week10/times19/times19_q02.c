/** 
 * @Author : Lu7fer
 * @Date: 2020-05-07 10:54:38
 * @LastEditTime: 2020-05-07 10:54:38
 * @FilePath: \C-language-study-homework\week10\times19\times19_q02.c
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software:
    you can redistribute it and/or modify it under the terms of 
the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License 
along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
 */
#include <stdio.h>
#include <stdlib.h>

struct candidate
{
    //候选人代号
    int code;
    //候选人姓名
    char name[20];
    //候选人票数
    int vote;
};
/**
 * 将形参中大的排在前
*/
void arrange(struct candidate *s1, struct candidate *s2)
{
    struct candidate tmp;
    if ((s1->vote) < (s2->vote))
    {
        tmp = *s1;
        *s1 = *s2;
        *s2 = tmp;
    }
}

int main(int argc, char const *argv[])
{
    struct candidate candidates[4];
    int loop_i, loop_j, flag, total_vote, valid_vote, vote;
    float waste_rate;
    //输入候选人姓名,并编号,同时初始化结构体
    for (loop_i = 0; loop_i < 4; loop_i++)
    {
        printf("请输入第%d位候选人姓名:", loop_i + 1);
        //init
        scanf("%s", &(candidates[loop_i].name));
        candidates[loop_i].code = loop_i + 1;
        candidates[loop_i].vote = 0;
        getchar();
    }
    puts("生成代号完毕\n");
    //输出候选人代号,方便输入
    for (loop_i = 0; loop_i < 4; loop_i++)
        printf("候选人%s的代号为:%02d\n", candidates[loop_i].name, candidates[loop_i].code);
    printf("开始投票,请输入候选人代号,错误代号记为废票,输入-1停止投票:\n");
    //init variable
    flag = 1;
    total_vote = 0;
    valid_vote = 0;
    loop_j = 0;
    //给候选人投票
    while (flag)
    {
        loop_j++;
        printf("请第%d位投票:\n", loop_j);
        scanf("%d", &vote);
        //输入-1停止投票
        if (vote == -1)
        {
            flag = 0;
        }
        else
        {
            //总票数加1
            total_vote++;
            //遍历结构体以寻找候选人
            for (loop_i = 0; loop_i < 4; loop_i++)
            {
                //找到候选人
                if (candidates[loop_i].code == vote)
                {
                    candidates[loop_i].vote++;
                    //有效票数+1
                    valid_vote++;
                    break;
                }
            }
        }
    }
    puts("投票完毕,正在生成排名\n");
    //根据票数排序,少量数据,采用冒泡排序
    for (loop_i = 0; loop_i < 4; loop_i++)
    {
        for (loop_j = 1; loop_j < 4 - loop_i; loop_j++)
        {
            //将大的排前面
            arrange((candidates + loop_j - 1), (candidates + loop_j));
        }
    }
    //计算废票率
    waste_rate = (float)(total_vote - valid_vote) / (total_vote);
    printf("废票率为:%4.2f%%\n", waste_rate * 100);
    //输出排名
    for (loop_i = 0, loop_j = 1; loop_i < 4; loop_i++)
    {
        printf("得票第:%d的候选人是:%s,共得到:%d票\n", loop_j, candidates[loop_i].name, candidates[loop_i].vote);
        //对于排名相等的处理:不等排名loop_j++
        if (loop_i <3 && (candidates[loop_i].vote != candidates[loop_i+1].vote))
        {
            loop_j++;
        }
    }
    system("pause");
    return 0;
}
