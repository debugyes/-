#include "linked_list_header.h"

PNODE creat_list(void)
{
	int len;//用来存放有效节点的个数
	int i;
	int val; //用来临时存放用户输入的值

	//分配了一个不存放有效数据的头结点
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	if (pHead == NULL)
	{
		printf("分配失败，程序终止");
		exit(-1);
	}

	PNODE pTail = pHead;
	pTail->pNext = NULL;

	printf("请输入您需要生成的链表节点的个数：len=");
	scanf("%d", &len);
	for (int i = 0; i < len; i++)
	{
		printf("请输入第%d个节点的值：", i + 1);
		scanf("%d", &val);

		PNODE pNew = (PNODE)malloc(sizeof(NODE));

		pNew->data = val;//把值放进新节点的数据域
		pTail->pNext = pNew;//pTail(实际上目前是pHEAD)的指针域指向pNew，pNew挂在pHEAD的后面
		pTail = pNew;//把pNew赋值给pTail，pNew现在是最后一个节点
		pTail->pNext = NULL;
	}

	return pHead;
}

void traverse_list(PNODE pHead)
{
	PNODE p = pHead->pNext;

	while (p != NULL)
	{
		printf("%d  ", p->data);
		p = p->pNext;
	}
	printf("\n");
}

bool is_empty(PNODE pHead)
{
	if (pHead->pNext == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int length_list(PNODE pHead)
{
	int count = 0;
	PNODE p = pHead->pNext;

	while (p != NULL)
	{
		count++;
		p = p->pNext;
	}

	return count;
}

void sort_list(PNODE pHead)
{
	int i, j, t;
	PNODE p, q;
	int length = length_list(pHead);

	for (i = 0, p=pHead->pNext; i < length-1; i++, p = p->pNext)
	{
		for (j = i + 1, q = p->pNext; j < length; j++, q = q->pNext)
		{
			if (p->data > q->data)
			{
				t = p->data;
				p->data = q->data;
				q->data = t;
			}
		}
	}
}

//在pHead所指向链表的前面插入一个新的节点，该节点的值是val,pos从1开始
bool insert_list(PNODE pHead, int pos, int val)
{
	int i = 0;
	PNODE p = pHead;
	while (p != NULL && i < pos-1)
	{
		p = p->pNext;
		i++;
	}

	if (i > pos - 1 || p == NULL)
	{
		return false;
	}

	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if (pNew == NULL)
	{
		printf("分配失败！\n");
		exit(-1);
	}

	pNew->data = val;
	
	PNODE q = p->pNext;
	p->pNext = pNew;
	pNew->pNext = q;
	return true;
}

bool delet_list(PNODE pHead, int pos, int* val)//val为删除的数值
{

}