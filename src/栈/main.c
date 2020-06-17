#include"stackHeader.h"

int main(void)
{
	STACK S;//此时一个完整的栈还没有出现，因为ptop和pbottom都是垃圾值。只有当这两个变量同时指向一个头结点才算一个空栈
	
	initStack(&S);//初始化栈
	push(&S, 1);//压栈
	push(&S, 2);//压栈
	pull(&S);//出栈
	traverse();//遍历输出

	return 0;
}