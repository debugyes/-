#include"stackHeader.h"

int main(void)
{
	STACK S;//此时一个完整的栈还没有出现，因为ptop和pbottom都是垃圾值。只有当这两个变量同时指向一个头结点才算一个空栈
	
	init(&S);//初始化栈
	push(&S, 1);//压栈
	push(&S, 2);//压栈
	push(&S, 3);//压栈
	push(&S, 4);//压栈
	push(&S, 5);//压栈
	push(&S, 6);//压栈
	traverse(&S);//遍历输出

	int val;
	//测试出栈
	if (pop(&S, &val))
	{
		printf("出栈成功：%d\n", val);
	}
	else
	{
		printf("出栈失败\n");
	}

	//清空
	clear(&S);
	traverse(&S);

	return 0;
}