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
		printf("%d", &val);

		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		if (pHead == NULL)
		{
			printf("����ʧ�ܣ�������ֹ");
			exit(-1);
		}

		pNew->data = val;
		pTail->pNext = pNew;
		pTail = pNew;
		pTail->pNext = NULL;
	}

	return pHead;
}

void traverse_list(PNODE pHead)
{

}