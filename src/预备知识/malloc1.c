/*
	malloc�����������Ժ���ͨ����һ��ȥʹ��
	malloc��������鲻���Զ��ͷţ�����Ҫ�ֶ��ͷ�

	malloc���ڶ�̬���䣬�ڶ��з���
*/
#include<stdio.h>
#include<malloc.h>
int main(void)
{
	int a[5] = { 4,10,2,8,6 };
	int len;
	printf("��������Ҫ���������ĳ��ȣ�len=");
	scanf("%d", &len);

	int* pArr = (int*)malloc(sizeof(int) * len);
	//ǿ������ת��������
	//malloc����ֻ���ص�һ���ֽڵ�ַ�����һ���ֽڵ�ַ�����壬
	//��Ϊint�����ĸ��ֽ��е�һ���ֽڵ�ַ��ʾ�ģ�doubleҲ���ð˸��ֽ��е�һ���ֽڵ�ַ��ʾ��
	//(int*)����malloc������ĵ�ַÿ�ĸ��ֽھʹ���һ��int���������ĸ��ֽڵĵ�һ���ֽڱ�ʾ��doubleͬ��
	//pArrָ��ǰ4���ֽڣ�pArr+1ָ����ĸ��ֽڣ��Դ�����
	
	*pArr = 4;
	pArr[1] = 10;
	printf("%d %d\n", *pArr, pArr[1]);//4 10

	//free(pArr);//��pArr������Ķ�̬�����20���ֽڵ��ڴ��ͷ�


	//���԰�malloc����ĵ�ַ����ͨ��������

	printf("������Ԫ��ֵ��");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &pArr[i]);
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(pArr + i));
	}


	return 0;
}