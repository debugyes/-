#include<stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };

	/*
		a[3] == *(3 + a);
		3[a] == *(3+a)
		a[3]ºÍ3[a]µÈ¼Û
	*/

	for (int i = 0; i < 5; i++)
	{
		printf("%p\n", a + i);
	}
	
	printf("%d", *a + 3);

	return 0;
}