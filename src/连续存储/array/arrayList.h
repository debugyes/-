#pragma once
//定义了一个数据类型，该数据类型的名字叫struct Arr，该数据类型有三个成员，分别式pBase，len，cnt

struct Arr
{
	int* pBase;//存储数组第一个元素的地址
	int len;//数组所能容纳的最大元素的个数
	int cnt;//当前数组有效元素的个数
};

bool init_arr(struct Arr* pArr, int len);
bool append_arr(struct Arr* pArr, int val);
bool insert_arr(struct Arr* pArr, int val, int pos);
bool delete_arr(struct Arr* pArr, int pos, int* pVal);
int get();
bool is_empty(struct Arr* pArr);
bool is_full(struct Arr* pArr);
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);
void inversion_arr(struct Arr* pArr);
