#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
	int data;//������
	struct Node* pNext;//ָ����
}NODE, * PNODE; //NODE �ȼ��� struct Node, PNODE�ȼ���struct Node*

PNODE creat_list(void);
void traverse_list(PNODE pHead);
bool is_empty(PNODE pHead);
int length_list(PNODE pHead);
bool insert_list(PNODE pHead, int pos, int val);
bool delet_list(PNODE pHead, int pos, int* val);//valΪɾ������ֵ
void sort_list(PNODE pHead);
