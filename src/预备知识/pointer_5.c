/*
	ͨ�������޸ı���ֵ
	ֻ��ͨ����ַ
*/
#include<stdio.h>

void f(int* p);

int main()
{
	int i = 10;

	f(&i);
	printf("i = %d", i);

	return 0;
}

void f(int* p)
{
	*p = 99;
}