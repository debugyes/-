#include<stdio.h>

void f(int* p)//���Ƕ�����һ�����ֽ���*p���βΣ����Ƕ�����һ���βΣ����β����ֽ�p������������int*
{
	*p = 100;
}

int main()
{
	int i = 9;
	
	f(&i);
	printf("i = %d", i);


	return 0;
}