/*
	����ʲô�������ͣ�ֻҪҪ�ı�����ֵ������Ҫ����ַ
	����int���ͱ�����ַ��ָ�����: int*
	���� ����int���ͱ�����ַ��ָ�������int**
	ָ��ָ�������ָ�����

*/

#include<stdio.h>

void f(int** q);

int main()
{
	int i = 9;
	int* p = &i; // int* p; p = &i;

	printf("p = %p\n", p);
	f(&p);
	printf("p = %p\n", p);
	return 0;
}

void f(int** q)
{
	*q = (int*)0xFFFFFFFF;
}