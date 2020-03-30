/*
	指针变量统一的只占四个字节
*/
#include<stdio.h>
int main() 
{
	double* p;
	double x = 66.6;

	p = &x;//x占8个字节，一个字节是8位，一个字节一个地址
				//p里面存放1个字节地址，可以是首地址，可以是末地址

	double arr[3] = { 1.1,2.2, 3.3 };
	double* q;

	q = arr;
	printf("%p\n", q);//%p就是以十六进制输出
	q = arr + 1;
	printf("%p\n", q);


	return 0;
}