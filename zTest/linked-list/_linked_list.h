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

#ifndef CLSH
#define CLSH
#endif /* CLSH */

#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H
#endif /* __LINKEDLIST_C */

#ifndef _STDLIB_H
#include <stdlib.h>
#endif /* _STDLIB_H */
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
	size_t length;
	node_t *tail;
} linked_list;
typedef struct linked_list linked_list_t;

/**
 * 创建一个链表
*/
linked_list_t *clsh_creat_linked_list()
{
	linked_list_t *list = (linked_list_t *)malloc(sizeof(linked_list_t));
	list->length = 0;
	list->head = NULL;
	list->tail = NULL;
	return list;
}

/**
 * 添加到最后一个元素
 * @return NULL则添加失败,原因:申请内存失败
*/
linked_list_t *clsh_add_last(linked_list_t *list, void *append)
{
	node_t *n;
	if (n = (node_t *)malloc(sizeof(node_t)))
	{
		n->data = _clsh_memcpy(append);
		n->next = NULL;
		if (list->length == 0)
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
		list->length++;
		return list;
	}
	else
	{
		return NULL;
	}
}

/**
 * 获取第一个元素
 * @param linked_list_t 传入链表
 * @return NULL 原因:链表没有元素
*/
void *clsh_get_first(linked_list_t *list)
{
	if ((list->length) > 0)
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
	if (list->length > 0)
	{
		return (list->tail->data);
	}
	else
	{
		return NULL;
	}
}

/**
 * @param size_t index 大于0时从头到尾,小于零时从尾到头类似Python
 * @description index = 1返回第二个元素,index = -1返回倒数第一个元素
 * @function 内部使用
*/
node_t *_clsh_get_node(linked_list_t *list, size_t index)
{
	node_t *nd;
	index = (index < 0) ? index+list->length : index;
	if (index < list->length && index > 0)
	{
		if (index < (list->length / 2))
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
			nd = list->tail;
			index -= list->length;
			for (size_t i = -1; i > index; i--)
			{
				nd = nd->previous;
			}
			return nd;
		}
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
void *clsh_getdata(linked_list_t *list, size_t index)
{
	node_t *nd;
	if ((nd = _clsh_get_node(list, index)))
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
		n->data = _clsh_memcpy(ele);
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
 * 得到一个数据副本
*/
#ifndef _STRING_H
#include <string.h>
#endif
void *_clsh_memcpy(void *data)
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

inline node_t *_clsh_has_previous(node_t *n)
{
	return n->previous;
}

inline node_t *_clsh_has_next(node_t *n)
{
	return n->next;
}

inline linked_list_t *clsh_remove_first(linked_list_t *list)
{
	if (list->length > 0)
	{
		free(list->head->data);
		list->head = list->head->next;
		free(list->tail->next);
		list->length--;
		list->head->previous = NULL;
	}
	return list;
}

/**
 *  移除最后一个元素
 *  @return 删除最后一个元素,并返回该list.如果没有元素可以删除,则不做处理,直接返回
 * */
inline linked_list_t *clsh_remove_last(linked_list_t *list)
{
	if (list->length > 0)
	{
		free(list->tail->data);
		list->tail = list->tail->previous;
		list->length--;
		free(list->tail->next);
		list->tail->next = NULL;
	}
	return list;
}

linked_list_t *clsh_remove(linked_list_t *list, size_t index)
{
	node_t *node;
	if (node = _clsh_get_node(list, index))
	{
		if (_clsh_has_next(node) && _clsh_has_previous(node))
		{
			node->previous->next = node->next;
			node->next->previous = node->previous;
			free(node->data);
			free(node);
		}
		else
		{
			if (_clsh_has_previous(node))
				clsh_remove_first(list);
			clsh_remove_last(list);
		}
		return list;
	}
	else
	{
		return NULL;
	}
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
	if ((list->length) > 0)
	{
		size_t i;
		node_t  *this,*next;
		this = list->head;
		while (next = (this->next)){
			free(this->data);
			free(this);
			this=next;
		}
		free(this->data);
		free(this);
	}
	free(list);
}