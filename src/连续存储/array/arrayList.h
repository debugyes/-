#pragma once

struct Arr
{
	int* pBase;//�洢��ʽ�����һ��Ԫ�صĵ�ַ
	int len;//�����������ɵ����Ԫ�صĸ���
	int cnt;//��ǰ������ЧԪ�صĸ���
};

void init_arr(struct Arr* pArr, int len);
bool append_arr();
bool insert_arr();
bool delete_arr();
int get();
bool is_empty();
bool is_full();
void sort_arr();
void show_arr(struct Arr* pArr);
void inversion_arr();