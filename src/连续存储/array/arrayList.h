#pragma once

struct Arr
{
	int* pBase;//存储的式数组第一个元素的地址
	int len;//数组所能容纳的最大元素的个数
	int cnt;//当前数组有效元素的个数
};

void init_arr(struct Arr* pArr, int len);
bool append_arr(struct Arr* pArr, int val);
bool insert_arr(struct Arr* pArr, int val, int pos);
bool delete_arr();
int get();
bool is_empty(struct Arr* pArr);
bool is_full(struct Arr* pArr);
void sort_arr();
void show_arr(struct Arr* pArr);
void inversion_arr();