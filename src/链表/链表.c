#include "linked_list_header.h"

int main(void)
{
	PNODE pHead = NULL; //�ȼ���struct Node* pHead = NULL;
	pHead = creat_list();//����һ����ѭ�������������������ͷ���ĵ�ַ��ֵ��pHead

	//����traverse_list����������
	traverse_list(pHead);

	//����is_empty����
	if (is_empty(pHead))
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("����Ϊ��\n");
	}

	//����length_list�����Ⱥ���
	printf("����ĳ���Ϊ��%d\n", length_list(pHead));
	
	//����sort_list����������
	sort_list(pHead);
	traverse_list(pHead);

	//����insert_list���뺯��
	insert_list(pHead, 3, 10);
	traverse_list(pHead);

	return 0;
}

