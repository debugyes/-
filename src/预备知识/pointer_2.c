#include<stdio.h>
int main()
{
	int* p;//p�Ǹ�ָ�������int* p��ʾ��p����ֻ�ܴ洢int���ͱ����ĵ�ַ
	int i = 10;
	int j;

	p = &i;
	*p = i;
	printf("i = %d,", i);

	return 0;
}