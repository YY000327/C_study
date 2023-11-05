#pragma once
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include <stdio.h>
#include <string.h>
#include <assert.h>


enum OPTION {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}PeoInfo;

typedef struct Contact {

	PeoInfo data[100];
	int sz;
}Contact;



//函数声明

void Initcontact(Contact* pc);

//增加联系人信息
void AddContact(Contact* pc);

//显示所有联系人的信息
void ShowContact(const Contact* pc);

//删除指定联系人信息
void DelContact(Contact* pc);

//查找联系人
void SearchContact(Contact* pc);

//修改
void ModifyContact(Contact* pc);

