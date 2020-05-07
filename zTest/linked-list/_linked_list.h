/** 
 * @Author : Lu7fer
 * @Date: 2020-03-28 16:26:09
 * @LastEditTime: 2020-04-16 09:58:15
 * @Stu_ID: 2019X....X229_Lu7fer
 * @FilePath: \C-language-study-homework\zTest\linked_list.c
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

#include <stdlib.h>
#ifndef CLSH
#define CLSH
#endif /* CLSH */

#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H
#endif /* __LINKEDLIST_C */

/**
 * 默认使用void*
 * typedef  nodedata_t 即可使用不同数据类型,类似于泛型
*/
// #ifndef nodedata_t
//typedef void *nodedata_t;/* 定义节点体 */
// #define nodedata_t nodedata_t
// #endif

// typedef nodedata_t nodedata;

/* 链表节点,用户不应直接操作*/
struct node
{
	struct node *previous;
	void *data;
	struct node *next;
};
//#define node_t struct node
typedef struct node node_t;

/**
 * 链表头尾,存储链表头和尾节点,同时存储链表长度
 * 
*/
struct linked_list
{
	node_t *head;
	size_t lenth;
	node_t *tail;
} linked_list;
typedef struct linked_list linked_list_t;

/**
 * 创建一个链表
*/
linked_list_t *clsh_creat_linked_list()
{
	linked_list_t *list = (linked_list_t *)malloc(sizeof(linked_list_t));
	list->lenth = 0;
	list->head = NULL;
	list->tail = NULL;
	return list;
}

/**
 * 添加到最后一个元素
 * 
*/
linked_list_t *clsh_add_last(linked_list_t *list, void *append)
{
	node_t *n;
	if (n = (node_t *)malloc(sizeof(node_t)))
	{
		n->data = _clsh_insert(append);
		n->next = NULL;
		if (list->lenth == 0)
		{
			n->previous = NULL;
			list->head = n;
			list->tail = n;
		}
		else
		{
			n->previous = list->tail;
			list->tail->next = n;
			list->tail = n;
		}
		list->lenth++;
		return list;
	}
	else
	{
		return NULL;
	}
}

/**
 * 获取第一个元素
 * @param
 * @return
*/
void *clsh_get_first(linked_list_t *list)
{
	if ((list->lenth) > 0)
	{
		return (list->head->data);
	}
	else
	{
		return NULL;
	}
}

/**
 * 获取最后一个元素
 * @param list : 一个list
 * @param  ele : 一个元素的指针
 * @return 0 :正常
 * @param -1 : 异常 
*/
void *clsh_get_last(linked_list_t *list)
{
	if (list->lenth > 0)
	{
		return (list->tail->data);
	}
	else
	{
		return NULL;
	}
}

node_t *_clsh_get_node(linked_list_t *list, size_t index)
{
	node_t *nd;
	if (index < list->lenth || index > -1)
	{
		nd = list->head;
		for (size_t i = 0; i < index; i++)
		{
			nd = nd->next;
		}
		return nd;
	}
	else
	{
		return NULL;
	}
}

/**
 * @param linked_list_t *list : a linked list pointer
 * @param size_t index : get element by index 
 * @param int *element : a pointer of element we want get
 * @return if element exist, then get it and return 0,else return -1
 */
void *clsh_get(linked_list_t *list, size_t index)
{
	node_t *nd;
	if ((nd = _clsh_get_node(list, index)) != NULL)
	{
		return (nd->data);
	}
	else
	{
		return NULL;
	}
}

/**
 * 
 * @param
 * @param index 
 * @return
*/
linked_list_t *clsh_insert(linked_list_t *list, size_t index, void *ele)
{
	node_t *nd;
	if ((nd = _clsh_get_node(list, index)) != NULL)
	{
		node_t *n = (node_t *)malloc(sizeof(node_t));
		//
		n->data = _clsh_insert(ele);
		n->previous = nd->previous;
		n->next = nd;
		nd->previous->next = n;
		nd->previous = n;
		return list;
	}
	else
	{
		return NULL;
	}
}

/**
 * 
*/
#ifndef _STRING_H
#include <string.h>
#endif
void *_clsh_insert(void *data)
{
	void *nodedata;
	if (nodedata = malloc(sizeof(&data)))
	{
		return memcpy(nodedata, data, sizeof(&data));
	}
	else
	{
		return NULL;
	}
}
/**
 *  移除最后一个元素
 *  @return 删除最后一个元素,并返回该list.如果没有元素可以删除,则不做处理,直接返回
 * */
linked_list_t *clsh_remode_last(linked_list_t *list)
{
	if (list->lenth > 0)
	{
		free(list->tail->data);
		list->tail = list->tail->previous;
		list->lenth--;
		free(list->tail->next);
		list->tail->next = NULL;
	}
	return list;
}

node_t *_clsh_has_next(node_t *n)
{
	return n->next;
}
/**
 * 该node后是否具有下一个node
 * @return 如果有则返回下一个node指针,如果没有则返回NULL
*/
inline node_t *_clsh_next(node_t *n)
{
	return n->next;
}

void clsh_free_list(linked_list_t *list)
{
	if ((list->lenth) > 0)
	{
		size_t i;
		node_t *pre, *this;
		this = list->tail;
		while (this = (this->previous))
			free(this->next);
		free(this);
	}
	free(list);
}