#include<stdio.h>

void f(int* p)//不是定义了一个名字叫做*p的形参，而是定义了一个形参，改形参名字叫p，它的类型是int*
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