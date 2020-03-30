/*
	pst->sid
	表示pst所指向结构体变量中的sid这个成员

	注意事项：
		结构体变量不能加减乘除，但可以相互赋值
		普通结构体变量和结构体指针变量作为函数参数传递
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
	struct Student st = { 1000, "张三", 20 };

	st.sid = 99;//第一种方式

	struct Student* pst;
	pst = &st;

	pst->sid = 99; //第二种方式pst->sid等价于(*pst).sid,而(*pst).sid等价于st.sid，所以pst->sid等价于st.sid


	return 0;
}