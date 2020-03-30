#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include"arrayList.h"

//定义了一个数据类型，该数据类型的名字叫struct Arr，该数据类型有三个成员，分别式pBase，len，cnt


int main(void)
{
	struct Arr arr;

	init_arr(&arr, 6);//结构体相互赋值是复制内存值
	show_arr(&arr);

	return 0;
}
