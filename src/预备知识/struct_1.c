/*
	�ṹ��
	1. Ϊʲô����ֽṹ��
		Ϊ�˱���һЩ���ӵ����ݣ�����ͨ�Ļ������ͱ����޷�����Ҫ��
	2. ʲô�нṹ��
		�ṹ�����û�����ʵ��Ҫ����Ҫ�Լ�����ĸ�����������
	3. ���ʹ�ýṹ��
		
*/
#pragma warning(disable:4996)

#include<stdio.h>
#include<string.h>

struct Student
{
	int sid;
	char name[200];
	int age;
}; //�ֺŲ���ʡ

int main()
{
	struct Student st = {1000, "����", 20};
	
	printf("%d %s %d\n", st.age, st.name, st.sid);

	st.sid = 99;
	strcpy(st.name, "����");//�ṹ����ֻ���������ַ����鸳ֵ
	st.age = 22;
	printf("%d %s %d\n", st.age, st.name, st.sid);

	
	return 0;
}