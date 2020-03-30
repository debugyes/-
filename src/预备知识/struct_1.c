/*
	结构体
	1. 为什么会出现结构体
		为了表现一些复杂的数据，而普通的基本类型变量无法满足要求
	2. 什么叫结构体
		结构体是用户根据实际要求需要自己定义的复合数据类型
	3. 如何使用结构体
		
*/
#pragma warning(disable:4996)

#include<stdio.h>
#include<string.h>

struct Student
{
	int sid;
	char name[200];
	int age;
}; //分号不能省

int main()
{
	struct Student st = {1000, "张三", 20};
	
	printf("%d %s %d\n", st.age, st.name, st.sid);

	st.sid = 99;
	strcpy(st.name, "张三");//结构体里只能这样给字符数组赋值
	st.age = 22;
	printf("%d %s %d\n", st.age, st.name, st.sid);

	
	return 0;
}