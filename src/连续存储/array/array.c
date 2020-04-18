#include<stdio.h>
#include<stdbool.h>
#include"arrayList.h"
#include<malloc.h>//包含了stdlib.h
#include<stdlib.h>//包含了exit函数

bool init_arr(struct Arr* pArr, int len)
{
	pArr->pBase = (int*)malloc(sizeof(int) * len);

	if (pArr->pBase == NULL)//判断是否分配成功
	{
		printf("Error: memory malloc failed");
		exit(-1);//终止整个程序
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
		printf("数组已满，无法插入\n");
		return false;
	}

	//最多只能在最后一个元素后面一个位置插入元素，不能隔着空位插入元素
	//如果在最后一个元素后面插入一个元素，其实和append的功能一样了
	if (pos < 1 || (pos > (pArr->cnt+1)))
	{
		printf("插入失败\n");
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
		printf("数组为空，无法删除");
		return false;
	}

	if (pos<1 || pos > pArr->cnt)
	{
		printf("删除下标有误");
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
	if (pArr->cnt == pArr->len)//长度len和有效元素个数cnt相等就代表满了
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
			printf("%d ", pArr->pBase[i]);//pArr->pBase看作一个整体，就是数组名
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
