#include"stackHeader.h"

int main(void)
{
	STACK S;//��ʱһ��������ջ��û�г��֣���Ϊptop��pbottom��������ֵ��ֻ�е�����������ͬʱָ��һ��ͷ������һ����ջ
	
	init(&S);//��ʼ��ջ
	push(&S, 1);//ѹջ
	push(&S, 2);//ѹջ
	push(&S, 3);//ѹջ
	push(&S, 4);//ѹջ
	push(&S, 5);//ѹջ
	push(&S, 6);//ѹջ
	traverse(&S);//�������

	int val;
	//���Գ�ջ
	if (pop(&S, &val))
	{
		printf("��ջ�ɹ���%d\n", val);
	}
	else
	{
		printf("��ջʧ��\n");
	}

	//���
	clear(&S);
	traverse(&S);

	return 0;
}