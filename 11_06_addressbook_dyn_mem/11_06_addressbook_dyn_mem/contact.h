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



//��������

void Initcontact(Contact* pc);

//������ϵ����Ϣ
void AddContact(Contact* pc);

//��ʾ������ϵ�˵���Ϣ
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ����Ϣ
void DelContact(Contact* pc);

//������ϵ��
void SearchContact(Contact* pc);

//�޸�
void ModifyContact(Contact* pc);

