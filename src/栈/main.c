#include"stackHeader.h"

int main(void)
{
	STACK S;//��ʱһ��������ջ��û�г��֣���Ϊptop��pbottom��������ֵ��ֻ�е�����������ͬʱָ��һ��ͷ������һ����ջ
	
	initStack(&S);//��ʼ��ջ
	push(&S, 1);//ѹջ
	push(&S, 2);//ѹջ
	pull(&S);//��ջ
	traverse();//�������

	return 0;
}