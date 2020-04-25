#include<stdio.h>

typedef int ZHANGSAN; //为int再重新多取一个名字，ZHANGSAN等价于int

typedef struct Student
{
	int sid;
	char name[100];
	char sex;
}* PSTU, STU; //PST等价于struct Student *
				   //ST代表了struct Student *

int main(void)
{
	STU st;
	PSTU ps = &st;
	ps->sid = 99;
	printf("%d\n", ps->sid);

	return 0;
}