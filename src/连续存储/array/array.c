#include<stdio.h>
#include<stdbool.h>
#include"arrayList.h"
#include<malloc.h>//������stdlib.h
#include<stdlib.h>//������exit����

bool init_arr(struct Arr* pArr, int len)
{
	pArr->pBase = (int*)malloc(sizeof(int) * len);

	if (pArr->pBase == NULL)//�ж��Ƿ����ɹ�
	{
		printf("Error: memory malloc failed");
		exit(-1);//��ֹ��������
	}
	else
	{
		pArr->len = len;
		pArr->cnt = 0;
		return true;
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
		printf("�����������޷�����\n");
		return false;
	}

	//���ֻ�������һ��Ԫ�غ���һ��λ�ò���Ԫ�أ����ܸ��ſ�λ����Ԫ��
	//��������һ��Ԫ�غ������һ��Ԫ�أ���ʵ��append�Ĺ���һ����
	if (pos < 1 || (pos > (pArr->cnt+1)))
	{
		printf("����ʧ��\n");
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

bool delete_arr(struct Arr* pArr,  int pos, int* pVal)
{
	if (is_empty(pArr))
	{
		printf("����Ϊ�գ��޷�ɾ��");
		return false;
	}

	if (pos<1 || pos > pArr->cnt)
	{
		printf("ɾ���±�����");
		return false;
	}

	*pVal = pArr->pBase[pos - 1];
	for (int i = pos; i < pArr->cnt; i++)
	{
		pArr->pBase[i - 1] = pArr->pBase[i];	
	}
	pArr->cnt -= 1;

	return true;
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

void sort_arr(struct Arr* pArr)
{
	int temp;

	for (int i = 0; i < pArr->cnt; i++)
	{
		for (int j = i+1; j < pArr->cnt; j++)
		{
			if (pArr->pBase[i] > pArr->pBase[j])
			{
				temp = pArr->pBase[i];
				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = temp;
			}
		}
	}
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

void inversion_arr(struct Arr* pArr)
{
	int temp;
	int i, j;
	for (i = 0, j = pArr->cnt - 1; i < j; i++, j--)
	{
		temp = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = temp;
	}
}
