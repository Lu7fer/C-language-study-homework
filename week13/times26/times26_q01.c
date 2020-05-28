/** 
 * @Author : Lu7fer
 * @Date: 2020-05-28 09:21:29
 * @LastEditTime: 2020-05-28 09:21:29
 * @FilePath: \C-language-study-homework\week13\times26\times26_q01.c
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

#define FILEOPEN(x,y,z)  if(!(x=fopen(y,z)))              \
                                {                                                   \
                                    printf("%s can't open!\n",y);    \
                                    system("pause");                      \
                                    exit(1);                                     \
                                }

int main(int argc, char const *argv[])
{
    FILE *src;
    FILE *dest;
    char c;
    FILEOPEN(src,"week13/times26/file1.txt","r")
    FILEOPEN(dest,"week13/times26/file2.txt","a")
    //加密规则:  大写A-W或小写a-w，每个字符加3 ，大写X-Z或 小写x-z每个字符减23.
    while ((c=fgetc(src))!=EOF)
    {
        if((c>='A'&&c<='W')||(c>='a'&&c<='w')){
            c+=3;
        }else if (c>='X'&&c<='Z'||c>='x'&&c<='z')
        {
            c-=23;
        }
        fputc(c,dest);
    }
    fclose(src);
    fclose(dest);
    system("pause");
    return 0;
}
