#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//实现一个通讯录
//通讯录中保存信息：
//	1.名字
//	2.年龄
//	3.性别
//	4.电话
//  5.住址

//存放100 个人的星系
//增加


void menu() {
	printf("************************************************\n");
	printf("*********** 1. add          2. del    **********\n");
	printf("*********** 3. search       4. modify **********\n");
	printf("*********** 5. show         6. sort   **********\n");
	printf("*********** 0. exit                   **********\n");
	printf("************************************************\n");


}

void test() {
	int input = 0;
	//首先得有通讯录
	
	Contact con;
	Initcontact(&con);

	do
	{
		menu();
		printf("请选择：》");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//排序
			//按照什么来排序
			printf("In devlopment\n");
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;

		default:
			printf("选择错误，重新选择\n");
			break;

		}
	} while (input);
}


int main() {

	test();


	return 0;
}