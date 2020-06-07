#include "linked_list_header.h"

PNODE creat_list(void)
{
	int len;//���������Ч�ڵ�ĸ���
	int i;
	int val; //������ʱ����û������ֵ

	//������һ���������Ч���ݵ�ͷ���
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	if (pHead == NULL)
	{
		printf("����ʧ�ܣ�������ֹ");
		exit(-1);
	}

	PNODE pTail = pHead;
	pTail->pNext = NULL;

	printf("����������Ҫ���ɵ�����ڵ�ĸ�����len=");
	scanf("%d", &len);
	for (int i = 0; i < len; i++)
	{
		printf("�������%d���ڵ��ֵ��", i + 1);
		scanf("%d", &val);

		PNODE pNew = (PNODE)malloc(sizeof(NODE));

		pNew->data = val;//��ֵ�Ž��½ڵ��������
		pTail->pNext = pNew;//pTail(ʵ����Ŀǰ��pHEAD)��ָ����ָ��pNew��pNew����pHEAD�ĺ���
		pTail = pNew;//��pNew��ֵ��pTail��pNew���������һ���ڵ�
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

//��pHead��ָ�������ǰ�����һ���µĽڵ㣬�ýڵ��ֵ��val,pos��1��ʼ
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
		printf("����ʧ�ܣ�\n");
		exit(-1);
	}

	pNew->data = val;
	
	PNODE q = p->pNext;
	p->pNext = pNew;
	pNew->pNext = q;
	return true;
}

bool delet_list(PNODE pHead, int pos, int* val)//valΪɾ������ֵ
{
	int i = 0;
	PNODE p;
	p = pHead;
	while (p->pNext != NULL && i < pos-1)//��posǰһ��λ��ͣ��
	{
		p = pHead->pNext;
		i++;
	}
	if (p->pNext != NULL && i < pos-1)
	{
		return false;
	}

	PNODE q = p->pNext;
	*val = q->data;

	//ɾ��p����Ľڵ�
	p->pNext = p->pNext->pNext;
	free(q);
	q = NULL;
	return true;
}