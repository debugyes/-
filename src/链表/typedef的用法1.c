#include<stdio.h>

typedef int ZHANGSAN; //为int再重新多取一个名字，ZHANGSAN等价于int

typedef struct Student
{
	int sid;
	char name[100];
	char sex;
}ST;

int main(void)
{
	//int i = 10; //等价于ZHANGSAN i = 10;
	//ZHANGSAN j = 20;
	//printf("%d\n", j);

	struct Student st;
	struct Student* ps = &st;

	ST st2;
	st2.sid = 200;
	printf("%d", st2.sid);
	return 0;
}