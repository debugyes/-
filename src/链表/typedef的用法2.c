#include<stdio.h>

typedef int ZHANGSAN; //Ϊint�����¶�ȡһ�����֣�ZHANGSAN�ȼ���int

typedef struct Student
{
	int sid;
	char name[100];
	char sex;
}* PSTU, STU; //PST�ȼ���struct Student *
				   //ST������struct Student *

int main(void)
{
	STU st;
	PSTU ps = &st;
	ps->sid = 99;
	printf("%d\n", ps->sid);

	return 0;
}