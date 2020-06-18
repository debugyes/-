/*
	ջ���㷨��
	1. ѹջ
	2. ��ջ
	
*/

#include "stackHeader.h"

void init(PSTACK pS)
{
	pS->pTop = (PNODE)malloc(sizeof(NODE));
	if (pS->pTop == NULL)
	{
		printf("����ʧ��");
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

	pNew->data = val;//��ֵ�Ž��½ڵ�
	pNew->pNext = pS->pTop;//��ΪpTopָ�����Զ���������һ���ڵ㣬����ֻҪ��pTop�����½ڵ����Ϳ�����
	pS->pTop = pNew;//�ٽ�pTopָ���½ڵ㣬��ʱpNew�ڵ�����������һ���ڵ�
}

void traverse(PSTACK pS)
{
	PNODE p = pS->pTop;
	if (pS->pBotom == pS->pTop)
	{
		printf("ջΪ��");
	}
	else
	{
		while (p != pS->pBotom)//ֻҪpTopû�к�pBottom��ȣ���ô��˵��û�е���
			{
				printf("%d ", p->data);
				p = p->pNext;
			}
		printf("\n");
	}	
}

//��pS��ָ���ջ��ջһ�Σ����ѳ�ջ��Ԫ�ش���pVal�β���ָ��ı����С������ջʧ�ܣ�����false�����򷵻�true
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
