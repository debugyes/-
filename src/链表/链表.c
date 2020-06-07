#include "linked_list_header.h"

int main(void)
{
	PNODE pHead = NULL; //等价于struct Node* pHead = NULL;
	pHead = creat_list();//创建一个非循环单链表，并将该链表的头结点的地址赋值给pHead

	//测试traverse_list遍历链表函数
	traverse_list(pHead);

	//测试is_empty函数
	if (is_empty(pHead))
	{
		printf("链表为空\n");
	}
	else
	{
		printf("链表不为空\n");
	}

	//测试length_list链表长度函数
	printf("链表的长度为：%d\n", length_list(pHead));
	
	//测试sort_list链表排序函数
	sort_list(pHead);
	traverse_list(pHead);

	//测试insert_list插入函数
	insert_list(pHead, 3, 10);
	traverse_list(pHead);

	//测试delet_list删除元素函数
	int val;
	if (delet_list(pHead, 1, &val))
	{
		printf("删除成功\n");
		traverse_list(pHead);
	}
	else
	{
		printf("删除失败\n");
	}

	return 0;
}

