#include<stdio.h>
#include<stdbool.h>
#include"arrayList.h"
#include<malloc.h>//������stdlib.h
#include<stdlib.h>//������exit����

void init_arr(struct Arr* pArr, int len)
{
	pArr->pBase = (int *) malloc(sizeof(int) * len);

	if (pArr->pBase == NULL)//�ж��Ƿ����ɹ�
	{
		printf("Error: memory malloc failed");
		exit(-1);//��ֹ��������
	}
	else
	{
		pArr->len = len;
		pArr->cnt = 0;
	}
}

bool append_arr(struct Arr* pArr, int val)
{
	//��������ʱ��
	if (is_full(pArr))
	{
		return false;
	}
	//���ֲ���ʱ׷��
	else
	{
		pArr->pBase[pArr->cnt] = val;
		pArr->cnt++;
		return true;
	}
}

bool insert_arr(struct Arr* pArr, int val, int pos) //pos��ֵ��1��ʼ�����뵽posǰһ��λ��
{
	int temp;

	if (is_full(pArr))
	{
		printf("�����������޷�����");
		return false;
	}

	if (pos < 1 || (pos > (pArr->len)))
	{
		printf("����ʧ��");
		return false;
	}

	else
	{
		for (int i = pArr->cnt -1; i >= pos-1; i--)
		{
			pArr->pBase[i+1] = pArr->pBase[i];
		}
		pArr->pBase[pos - 1] = val;

		pArr->cnt++;
		return true;
	}
}

bool delete_arr()
{
}

int get()
{
}

bool is_empty(struct Arr * pArr)
{
	if (pArr->cnt == 0) 
	{
		return true;
	}
	else
	{
		return false;
	}	
}

bool is_full(struct Arr* pArr)
{
	if (pArr->cnt == pArr->len)//����len����ЧԪ�ظ���cnt��Ⱦʹ�������
	{
		return true;
	}
	else
	{
		return false;
	}
}

void sort_arr()
{
}

void show_arr(struct Arr* pArr)
{
	if (is_empty(pArr))
	{
		printf("The list is empty");
	}
	else
	{
		for (int i = 0; i < pArr->cnt; i++)
		{
			printf("%d ", pArr->pBase[i]);//pArr->pBase����һ�����壬����������
		}
		printf("\n");
	}
}

void inversion_arr()
{
}
