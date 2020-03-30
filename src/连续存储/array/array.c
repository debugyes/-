#include<stdbool.h>
#include"arrayList.h"
#include<malloc.h>//包含了stdlib.h
#include<stdlib.h>//包含了exit函数

void init_arr(struct Arr* pArr, int len)
{
	pArr->pBase = (struct Arr*) malloc(sizeof(int) * len);

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
			printf("%d ", pArr->pBase[i]);//pArr->pBase看作一个整体，就是数组名
		}
		printf("\n");
	}
}

void inversion_arr()
{
}
