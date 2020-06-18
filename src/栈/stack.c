/*
	栈的算法：
	1. 压栈
	2. 出栈
	
*/

#include "stackHeader.h"

void init(PSTACK pS)
{
	pS->pTop = (PNODE)malloc(sizeof(NODE));
	if (pS->pTop == NULL)
	{
		printf("分配失败");
		exit(-1);
	}
	else
	{
		pS->pBotom = pS->pTop;
		pS->pBotom->pNext = NULL;
	}
}

void push(PSTACK pS, int val)
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));

	pNew->data = val;//把值放进新节点
	pNew->pNext = pS->pTop;//因为pTop指向的永远是最上面的一个节点，所以只要把pTop挂在新节点后面就可以了
	pS->pTop = pNew;//再将pTop指向新节点，此时pNew节点就是最上面的一个节点
}

void traverse(PSTACK pS)
{
	PNODE p = pS->pTop;
	if (pS->pBotom == pS->pTop)
	{
		printf("栈为空");
	}
	else
	{
		while (p != pS->pBotom)//只要pTop没有和pBottom相等，那么就说明没有到底
			{
				printf("%d ", p->data);
				p = p->pNext;
			}
		printf("\n");
	}	
}

//把pS所指向的栈出栈一次，并把出栈的元素存入pVal形参所指向的变量中。如果出栈失败，返回false，否则返回true
bool pop(PSTACK pS, int* val)
{
	PNODE r;
	if (empty(pS))
	{
		return false;
	}
	else
	{
		*val = pS->pTop->data;
		r = pS->pTop;
		free(r);
		r = NULL;
		pS->pTop = pS->pTop->pNext;
	}
}

bool clear(PSTACK pS)
{
	if (empty(pS))
	{
		return false;
	}
	else
	{
		PNODE p,q;
		p = pS->pTop;
		q = NULL;
		while (p != pS->pBotom)
		{
			q = p->pNext;
			free(p);
			p = q;
		}
		pS->pTop = pS->pBotom;
		return true;
	}	
}

bool empty(PSTACK pS)
{
	if (pS->pBotom == pS->pTop)
	{
		return true;
	}
	else
	{
		return false;
	}
}
