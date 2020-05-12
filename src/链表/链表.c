#include "linked_list_header.h"

int main(void)
{
	PNODE pHead = NULL; //等价于struct Node* pHead = NULL;
	printf("%d", sizeof(PNODE));
	pHead = creat_list();//创建一个非循环单链表，并将该链表的头结点的地址赋值给pHead
	traverse_list(pHead);
	return 0;
}

