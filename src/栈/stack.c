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
		pS->pBotom = pS->pBotom;
		pS->pBotom->pNext = NULL;
	}
}
void push(PSTACK pS, int val)
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	pNew->data = val;
	pS->pTop->pNext = pNew;
	pS->pTop = pNew;
}
int pull(PSTACK pS, int val)
{

}