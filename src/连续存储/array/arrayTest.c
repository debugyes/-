#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include"arrayList.h"

//������һ���������ͣ����������͵����ֽ�struct Arr��������������������Ա���ֱ�ʽpBase��len��cnt


int main(void)
{
	struct Arr arr;

	init_arr(&arr, 6);//�ṹ���໥��ֵ�Ǹ����ڴ�ֵ
	show_arr(&arr);

	return 0;
}
