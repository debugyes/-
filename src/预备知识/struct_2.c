/*
	pst->sid
	��ʾpst��ָ��ṹ������е�sid�����Ա

	ע�����
		�ṹ��������ܼӼ��˳����������໥��ֵ
		��ͨ�ṹ������ͽṹ��ָ�������Ϊ������������
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
	struct Student st = { 1000, "����", 20 };

	st.sid = 99;//��һ�ַ�ʽ

	struct Student* pst;
	pst = &st;

	pst->sid = 99; //�ڶ��ַ�ʽpst->sid�ȼ���(*pst).sid,��(*pst).sid�ȼ���st.sid������pst->sid�ȼ���st.sid


	return 0;
}