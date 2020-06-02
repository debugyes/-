#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Node
{
	int data;//数据域
	struct Node* pNext;//指针域
}NODE, * PNODE; //NODE 等价于 struct Node, PNODE等价于struct Node*

PNODE creat_list(void);
void traverse_list(PNODE pHead);
