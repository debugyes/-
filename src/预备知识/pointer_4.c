/*
	ָ�����ͳһ��ֻռ�ĸ��ֽ�
*/
#include<stdio.h>
int main() 
{
	double* p;
	double x = 66.6;

	p = &x;//xռ8���ֽڣ�һ���ֽ���8λ��һ���ֽ�һ����ַ
				//p������1���ֽڵ�ַ���������׵�ַ��������ĩ��ַ

	double arr[3] = { 1.1,2.2, 3.3 };
	double* q;

	q = arr;
	printf("%p\n", q);//%p������ʮ���������
	q = arr + 1;
	printf("%p\n", q);


	return 0;
}