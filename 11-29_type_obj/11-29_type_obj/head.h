#pragma once
#include  <iostream>
using namespace std;

//
//inline void f(int i) 
//{
//	cout << i << endl;
//}
//
//
//void func();


class Stack1
{
private:
	int* a;
	int top;
	int capacity;

public:
	void Init();
	void Push(int x);

	//Ĭ��ֱ���������涨��ľ���inline
	//��ȷ���÷������ĺ��������Ͷ������
	//��С�ĺ�������ֱ���������涨��
	bool Empty() {
		return top = 0;
	}
};
