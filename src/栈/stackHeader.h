#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node //�����ÿ���ڵ����������
{
	int data;
	struct Node* pNext;
}NODE, * PNODE;

typedef struct Stack
{
	PNODE pTop;//��Զָ��ջ��Ԫ��
	PNODE pBotom;//��Զָ��ջ��Ԫ�ص���һ��û�к����Ԫ��
}STACK, * PSTACK;

void init(PSTACK pS); //PSTACK����͵���struct Node*
void push(PSTACK pS, int val);
bool pop(PSTACK pS, int val);
void traverse(PSTACK pS);
bool empty(PSTACK pS);
void clear(PSTACK pS);



