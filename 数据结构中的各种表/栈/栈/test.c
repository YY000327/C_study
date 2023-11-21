#define  _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"


int main()
{
	ST s;
	STInit(&s);
	STPush(&s, 1);
	STPush(&s, 2);
	STPush(&s, 3);
	printf("%d ", STTop(&s));
	STPop(&s);
	printf("%d ", STTop(&s));
	STPop(&s);

	STPush(&s, 4);
	STPush(&s, 5);

	//    一     对     多
	// 入栈顺序  --  出栈顺序
	while (!STEmpty(&s))
	{
		printf("%d ", STTop(&s));
		STPop(&s);
	}
	printf("\n");

	return 0;
}