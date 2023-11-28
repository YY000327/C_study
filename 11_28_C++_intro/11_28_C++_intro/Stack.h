#pragma once
#include <stdio.h>
#include <stdlib.h>

namespace i {
	typedef struct Stack
	{
		int* a;
		int top;
		int capacity;
	}ST;
	void StackInit(ST* ps);
	void StackPush(ST* ps, int x);
}