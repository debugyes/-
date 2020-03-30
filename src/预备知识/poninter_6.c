/*
	无论什么数据类型，只要要改变他的值，必须要传地址
	保存int类型变量地址的指针变量: int*
	保存 保存int类型变量地址的指针变量：int**
	指向指针变量的指针变量

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