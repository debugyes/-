#include<stdio.h>
#include<string.h>

#pragma warning(disable:4996)
void f(struct Student* pst);
void g(struct Student st);
void g2(struct Student* pst);
struct Student
{
	int sid;
	char name[200];
	int age;
};

int main(void)
{
	struct Student st;

	f(&st);
	printf("%d %s %d\n", st.sid, st.name, st.age);

	//g(st);

	g2(&st);

	return 0;
}

void f(struct Student* pst)
{
	(*pst).sid = 99;
	strcpy(pst->name, "megumi");
	pst->age = 22;
}

//这种方式耗内存和时间，不推荐

void g(struct Student st)
{
	printf("%d %s %d\n", st.sid, st.name, st.age);
}


void g2(struct Student* pst)
{
	printf("%d %s %d\n", pst->sid, pst->name, pst->age);
}