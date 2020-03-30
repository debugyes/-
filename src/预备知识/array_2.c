/*
	通过函数操作一个数组要两个参数：数组名(数组第一个元素的地址)、长度
*/
#include<stdio.h>

void f(int* p, int len)
{
	//*(p+2) = -1;	//p[0] == *p		p[2] == *(p+2) == *(a+2) == a[2]
	//p[i]和a[i]的主函数的a[i]
	for (int i = 0; i < len; i++, p++)
	{
		printf("%d\n", *p);
	}

}
int main()
{
	int a[5] = { 1,2,3,4,5 };

	f(a, 5);	//a等价于&a[0]，&a[0]本身就是int *类型

	//printf("%d\n", a[2]);
	return 0;
}
