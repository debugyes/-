#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include"arrayList.h"


int main(void)
{
	struct Arr arr;
	int val;//���ڽ���ɾ����ֵ

	if (init_arr(&arr, 6))//�ṹ���໥��ֵ�Ǹ����ڴ�ֵ
	{
		printf("�����ʼ���ɹ�!\n");
	}

	if (append_arr(&arr, 1))
	{
		printf("׷������ɹ�!\n");
	}

	if (append_arr(&arr, 2))
	{
		printf("׷������ɹ�!\n");
	}

	if (append_arr(&arr, 3))
	{
		printf("׷������ɹ�!\n");
	}

	if (append_arr(&arr, 4))
	{
		printf("׷������ɹ�!\n");
	}

	if (append_arr(&arr, 5))
	{
		printf("׷������ɹ�!\n");
	}

	show_arr(&arr);

	if (insert_arr(&arr, 1, 2))
	{
		printf("����Ԫ�سɹ�!\n");
	}
	show_arr(&arr);

	printf("ɾ��Ԫ��\n");
	if (delete_arr(&arr, 1, &val))
	{
		printf("ɾ���ɹ�\n");
		printf("��ɾ����Ԫ����: %d\n", val);
	}
	show_arr(&arr);

	printf("����");
	inversion_arr(&arr);
	show_arr(&arr);

	printf("����");
	sort_arr(&arr);
	show_arr(&arr);


	/*
	if (append_arr(&arr, 1))
	{
		printf("׷�ӳɹ�\n");
	}
	else
	{
		printf("׷��ʧ��\n");
	}
	*/

	//insert_arr(&arr, 99, 7);

	return 0;
}
