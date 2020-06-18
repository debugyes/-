#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node //定义出每个节点的数据类型
{
	int data;
	struct Node* pNext;
}NODE, * PNODE;

typedef struct Stack
{
	PNODE pTop;//永远指向栈顶元素
	PNODE pBotom;//永远指向栈底元素的下一个没有含义的元素
}STACK, * PSTACK;

void init(PSTACK pS); //PSTACK本身就等于struct Node*
void push(PSTACK pS, int val);
bool pop(PSTACK pS, int val);
void traverse(PSTACK pS);
bool empty(PSTACK pS);
void clear(PSTACK pS);



