/** 
 * @Author : Lucifer_程曾
 * @Date: 2020-03-28 16:26:09
 * @LastEditTime: 2020-04-14 18:44:45
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\zTest\linked_list.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

#ifndef _LINKEDLIST_C
#define _LINKEDLIST_C
#endif /* _LINKEDLIST_C */

/**
 * 默认使用int
 * typedef  nodedata_t 即可使用不同数据类型,类似于泛型
*/
#ifndef _nodedata
//extern nodedata_t;
typedef int nodedata_t;
#define _nodedata
#endif
/**/

typedef nodedata_t nodedata;

/* 链表节点,用户不应直接操作*/
typedef struct node
{
	struct node *previous;
	nodedata data;
	struct node *next;
} node_t;

/**
 * 链表头尾,存储链表头和尾节点,同时存储链表长度
 * 
*/
typedef struct linked_list
{
	node_t *head;
	size_t lenth;
	node_t *tail;
} linked_list_t;

/**
 * 创建一个链表
*/
linked_list_t *creat_linked_list()
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
int append(linked_list_t *list, nodedata_t append)
{
	node_t *n;
	if ((n = (node_t *)malloc(sizeof(node_t))) != NULL)
	{
		n->data = append;
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
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * 获取第一个元素
 * @param
 * @return
*/
int head(linked_list_t *list, nodedata_t *ele)
{
	if (list->lenth > 0)
	{
		*ele = (list->head->data);
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * 获取最后一个元素
 * @param list : 一个list
 * @param  ele : 一个元素的指针
 * @return 0 :正常
 * @param -1 : 异常 
*/
int tail(linked_list_t *list, nodedata_t *ele)
{
	if (list->lenth > 0)
	{
		*ele = (list->tail->data);
		return 0;
	}
	else
	{
		return -1;
	}
}

node_t *_get_node(linked_list_t *list, size_t index)
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
int get(linked_list_t *list, size_t index, nodedata_t *element)
{
	node_t *nd;
	if ((nd = _get_node(list, index)) != NULL)
	{
		*element = nd->data;
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * 
 * @param
 * @param index 
 * @return
*/
int insert(linked_list_t *list, size_t index, nodedata_t ele)
{
	node_t *nd;
	if ((nd = _get_node(list, index)) != NULL)
	{
		node_t *n = (node_t *)malloc(sizeof(node_t));
		//
		n->data = ele;
		n->previous = nd->previous;
		n->next = nd;
		nd->previous->next = n;
		nd->previous = n;
		return 0;
	}
	else
	{
		return -1;
	}
}
/**
 *  移除最后一个元素
 *  @return 删除最后一个元素,并返回该list.如果没有元素可以删除,则不做处理,直接返回
 * */
linked_list_t *rmend(linked_list_t *list)
{
	if (list->lenth > 0)
	{
		list->tail = list->tail->previous;
		list->lenth--;
		free(list->tail->next);
		list->tail->next = NULL;
	}
	return list;
}

node_t *_has_next(node_t *n)
{
	return n->next;
}
/**
 * 该node后是否具有下一个node
 * @return 如果有则返回下一个node指针,如果没有则返回NULL
*/
int next(node_t *n)
{
	if ((n = _has_next(n)) != NULL)
		return 0;
	else
		return -1;
}

int main(int argc, char const *argv[])
{
	linked_list_t *list = creat_linked_list();
	append(list, 15);
	append(list, 25);
	append(list, 45);
	append(list, 65);
	nodedata_t ele;
	get(list, 2, &ele);
	printf("%d\n", ele);
	get(list, 1, &ele);
	printf("%d\n", ele);
	tail(list, &ele);
	printf("%d\n", ele);
	rmend(list);
	tail(list, &ele);
	printf("%d\n", ele);
	system("pause");
	return 0;
}
