#include<stdbool.h>
#include"arrayList.h"
#include<malloc.h>//������stdlib.h
#include<stdlib.h>//������exit����

void init_arr(struct Arr* pArr, int len)
{
	pArr->pBase = (struct Arr*) malloc(sizeof(int) * len);

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

bool append_arr()
{
}

bool insert_arr()
{
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

bool is_full()
{
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
