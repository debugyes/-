#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include"arrayList.h"

//定义了一个数据类型，该数据类型的名字叫struct Arr，该数据类型有三个成员，分别式pBase，len，cnt


int main(void)
{
	struct Arr arr;
	int val;//用于接受删除的值

	if (init_arr(&arr, 6))//结构体相互赋值是复制内存值
	{
		printf("数组初始化成功!\n");
	}

	if (append_arr(&arr, 1))
	{
		printf("追加数组成功!\n");
	}

	if (append_arr(&arr, 2))
	{
		printf("追加数组成功!\n");
	}

	if (append_arr(&arr, 3))
	{
		printf("追加数组成功!\n");
	}

	if (append_arr(&arr, 4))
	{
		printf("追加数组成功!\n");
	}

	if (append_arr(&arr, 5))
	{
		printf("追加数组成功!\n");
	}

	show_arr(&arr);

	if (insert_arr(&arr, 1, 2))
	{
		printf("插入元素成功!\n");
	}
	show_arr(&arr);

	printf("删除元素\n");
	if (delete_arr(&arr, 1, &val))
	{
		printf("删除成功\n");
		printf("您删除的元素是: %d\n", val);
	}
	show_arr(&arr);

	printf("逆序");
	inversion_arr(&arr);
	show_arr(&arr);

	printf("排序");
	sort_arr(&arr);
	show_arr(&arr);


	/*
	if (append_arr(&arr, 1))
	{
		printf("追加成功\n");
	}
	else
	{
		printf("追加失败\n");
	}
	*/

	//insert_arr(&arr, 99, 7);

	return 0;
}
