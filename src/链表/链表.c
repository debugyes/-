#include "linked_list_header.h"

int main(void)
{
	PNODE pHead = NULL; //�ȼ���struct Node* pHead = NULL;
	
	pHead = creat_list();//����һ����ѭ�������������������ͷ���ĵ�ַ��ֵ��pHead
	traverse_list(pHead);

	if (is_empty(pHead))
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("����Ϊ��\n");
	}

	printf("����ĳ���Ϊ��%d", length_list(pHead));
	
	return 0;
}

