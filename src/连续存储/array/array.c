#include<stdio.h>
#include<stdbool.h>
#include"arrayList.h"
#include<malloc.h>//包含了stdlib.h
#include<stdlib.h>//包含了exit函数

void init_arr(struct Arr* pArr, int len)
{
	pArr->pBase = (int *) malloc(sizeof(int) * len);

	if (pArr->pBase == NULL)//判断是否分配成功
	{
		printf("Error: memory malloc failed");
		exit(-1);//终止整个程序
	}
	else
	{
		pArr->len = len;
		pArr->cnt = 0;
	}
}

bool append_arr(struct Arr* pArr, int val)
{
	//数组满的时候
	if (is_full(pArr))
	{
		return false;
	}
	//数字不满时追加
	else
	{
		pArr->pBase[pArr->cnt] = val;
		pArr->cnt++;
		return true;
	}
}

bool insert_arr(struct Arr* pArr, int val, int pos) //pos的值从1开始，插入到pos前一个位置
{
	int temp;

	if (is_full(pArr))
	{
		printf("数组已满，无法插入");
		return false;
	}

	if (pos < 1 || (pos > (pArr->len)))
	{
		printf("插入失败");
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
	if (pArr->cnt == pArr->len)//长度len和有效元素个数cnt相等就代表满了
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
			printf("%d ", pArr->pBase[i]);//pArr->pBase看作一个整体，就是数组名
		}
		printf("\n");
	}
}

void inversion_arr()
{
}
