#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Node
{
	int data;//������
	struct Node* pNext;//ָ����
}NODE, * PNODE; //NODE �ȼ��� struct Node, PNODE�ȼ���struct Node*
