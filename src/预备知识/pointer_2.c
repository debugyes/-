#include<stdio.h>
int main()
{
	int* p;//p是个指针变量，int* p表示该p变量只能存储int类型变量的地址
	int i = 10;
	int j;

	p = &i;
	*p = i;
	printf("i = %d,", i);

	return 0;
}