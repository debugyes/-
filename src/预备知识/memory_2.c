#include<stdio.h>
#include<malloc.h>

struct Student
{
	int sid;
	int age;
};

struct Student* CreateStudent();
void showStudent(struct Student* ps);

int main(void)
{
	struct Student* ps;
	
	ps = CreateStudent();
	showStudent(ps);

	return 0;
}

struct Student* CreateStudent()
{
	struct Student* p = (struct Student*) malloc(sizeof(struct Student));

	p->age = 18;
	p->sid = 99;

	return p;
}

void showStudent(struct Student* ps)
{
	printf("%d %d", ps->sid, ps->age);
}

