/** 
 * @Author : Lu7fer
 * @Date: 2020-05-05 22:08:47
 * @LastEditTime: 2020-05-05 22:08:48
 * @FilePath: \C-language-study-homework\zTest\linked-list\_linked_list.c
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

/**
 * 防止多重包含
*/
 #ifndef _LINKEDLIST_C
#define _LINKEDLIST_C
#endif /* _LINKEDLIST_C */

#ifndef __LINKED_LIST_H
#include <_linked_list.h>
#endif /* _LINKED_LIST_H */

// #define MAX(a, b) ( (a)>(b)? (a):(b) )
// int rlt = MAX(10, 1);
// int rlt = ( (10)>(1)? (10):(1) );
//extern int __mingw_stdio_redirect__(fprintf)(FILE*, const char*, ...); 

#define _LINKED_LIST(Z) (Z)
#define LIST linked_list_t *
#define DATA void *
#define INDEX size_t index

extern inline LIST _LINKED_LIST(clsh_creat_linked_list)();
extern inline LIST _LINKED_LIST(clsh_insert)(LIST,INDEX,DATA);
extern inline LIST _LINKED_LIST(clsh_add_last)(LIST,DATA);
extern inline DATA _LINKED_LIST(clsh_get_first)(LIST);
extern inline DATA _LINKED_LIST(clsh_get_last)(LIST);
extern inline DATA _LINKED_LIST(clsh_get)(LIST,INDEX);
extern inline LIST _LINKED_LIST(clsh_remode_last)(LIST);

int main(int argc, char const *argv[])
{

     system("pause");
     return 0;
}


