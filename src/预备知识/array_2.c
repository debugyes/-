/*
	ͨ����������һ������Ҫ����������������(�����һ��Ԫ�صĵ�ַ)������
*/
#include<stdio.h>

void f(int* p, int len)
{
	//*(p+2) = -1;	//p[0] == *p		p[2] == *(p+2) == *(a+2) == a[2]
	//p[i]��a[i]����������a[i]
	for (int i = 0; i < len; i++, p++)
	{
		printf("%d\n", *p);
	}

}
int main()
{
	int a[5] = { 1,2,3,4,5 };

	f(a, 5);	//a�ȼ���&a[0]��&a[0]�������int *����

	//printf("%d\n", a[2]);
	return 0;
}
