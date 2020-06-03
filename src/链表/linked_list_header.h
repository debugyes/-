#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
	int data;//数据域
	struct Node* pNext;//指针域
}NODE, * PNODE; //NODE 等价于 struct Node, PNODE等价于struct Node*

PNODE creat_list(void);
void traverse_list(PNODE pHead);
bool is_empty(PNODE pHead);
int length_list(PNODE pHead);
bool insert_list(PNODE pHead, int pos, int val);
bool delet_list(PNODE pHead, int pos, int* val);//val为删除的数值
void sort_list(PNODE pHead);
