#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include"arrayList.h"

//������һ���������ͣ����������͵����ֽ�struct Arr��������������������Ա���ֱ�ʽpBase��len��cnt


int main(void)
{
	struct Arr arr;

	init_arr(&arr, 6);//�ṹ���໥��ֵ�Ǹ����ڴ�ֵ

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
	append_arr(&arr, 1);
	append_arr(&arr, 2);
	append_arr(&arr, 3);
	append_arr(&arr, 4);
	append_arr(&arr, 5);
	//append_arr(&arr, 6);
	insert_arr(&arr, 99, 7);

	show_arr(&arr);

	return 0;
}
