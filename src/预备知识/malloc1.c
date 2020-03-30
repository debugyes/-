/*
	malloc分配的数组可以和普通数组一样去使用
	malloc分配的数组不会自动释放，必须要手动释放
*/
#include<stdio.h>
#include<malloc.h>
int main(void)
{
	int a[5] = { 4,10,2,8,6 };
	int len;
	printf("请输入需要分配的数组的长度：len=");
	scanf("%d", &len);

	int* pArr = (int*)malloc(sizeof(int) * len);
	//强制类型转换的作用
	//malloc函数只返回第一个字节地址，这第一个字节地址无意义，
	//因为int是用四个字节中第一个字节地址表示的，double也是用八个字节中第一个字节地址表示的
	//(int*)代表malloc所分配的地址每四个字节就代表一个int变量，用四个字节的第一个字节表示，double同理。
	//pArr指向前4个字节，pArr+1指向后四个字节，以此类推
	
	*pArr = 4;
	pArr[1] = 10;
	printf("%d %d\n", *pArr, pArr[1]);

	//free(pArr);//把pArr所代表的动态分配的20个字节的内存释放


	//可以把malloc分配的地址当普通数组来用

	printf("请输入元素值：");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &pArr[i]);
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(pArr + i));
	}


	return 0;
}