#include "linked_list_header.h"

int main(void)
{
	PNODE pHead = NULL; //等价于struct Node* pHead = NULL;
	
	pHead = creat_list();//创建一个非循环单链表，并将该链表的头结点的地址赋值给pHead
	traverse_list(pHead);

	if (is_empty(pHead))
	{
		printf("链表为空\n");
	}
	else
	{
		printf("链表不为空\n");
	}

	printf("链表的长度为：%d", length_list(pHead));
	
	return 0;
}

