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
		printf("%d", &val);

		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		if (pHead == NULL)
		{
			printf("分配失败，程序终止");
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