#include "linked_list_header.h"

int main(void)
{
	PNODE pHead = NULL; //�ȼ���struct Node* pHead = NULL;
	
	pHead = creat_list();//����һ����ѭ�������������������ͷ���ĵ�ַ��ֵ��pHead
	traverse_list(pHead);




	return 0;
}

